buildmods ()
{
    author 'Simon Leischnig'
    about 'shows build modules as git repos and lets you iterate through them'
    param ''
    example ''
    group ''
    declare -a args
    args=()
    if [[ "$1" == '--ask' ]]; then
        shift;
        lambda : 'args+=("$line")' < <( linewise_args "$@" | lambda cmd : 'printf "echo would do %q; asksure && { { %s; } || echo fail at %q; } || { :; } \\n" "$cmd" "$cmd" "$cmd"'  )
    elif [[ "$1" == '--Ask' ]]; then
        shift;
        lambda : 'args+=("$line")' < <( linewise_args "$@" | lambda cmd : 'printf "echo would do %q; asksure && { { %s; } || echo fail at %q; } \\n" "$cmd" "$cmd" "$cmd"'  )
    elif [[ "$1" == '--force' ]]; then
        shift
        lambda : 'args+=("$line")' < <( linewise_args "$@" | lambda cmd : 'printf "{ %s; } || echo fail at %q\\n" "$cmd" "$cmd"'  )
    else
        lambda : 'args+=("$line")' < <( linewise_args "$@" | lambda cmd : 'printf "%s\\n" "$cmd"'  )
    fi
    buildmodselect --multi | replCddirs "${args[@]}"
}

