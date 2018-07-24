gitmods ()
{
    author 'Simon Leischnig'
    about 'shows touchstone modules as git repos and lets you iterate through them'
    param ''
    example ''
    group ''
    declare -a args
    args=()
    if [[ "$1" == '--ask' ]]; then
        shift;
        linewise_args "$@" | lambda cmd : 'printf "echo "would do:"  %q; asksure && { %s; } || echo fail\\n" "$cmd" "$cmd"' | lambda : 'args+=("$line")'
    elif [[ "$1" == '--force' ]]; then
        linewise_args "$@" | lambda cmd : 'printf "{ %s; } || echo fail at %q\\n" "$cmd" "$cmd"' | lambda : 'args+=("$line")'
    else
        linewise_args "$@" | lambda cmd : 'printf "%s\\n" "$cmd"' | lambda : 'args+=("$line")'
    fi
    modls | gitselect --multi | replCddirs "${args[@]}"
}
