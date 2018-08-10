buildmods ()
{
    author 'Simon Leischnig'
    about 'shows build modules as git repos and lets you iterate through them'
    param ''
    example ''
    group ''
    declare -a args
    local args=()
    lambda : 'args+=("$line")' <(replInitargsParse "$@")
    buildmodselect --multi | replCddirs "${args[@]}"
}

