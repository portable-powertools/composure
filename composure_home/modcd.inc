modcd ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    local query=
    if [[ $1 == '-n' || $1 == '-N' ]]; then
        local query="$2"
    else
        local query="$*"
    fi
    {
        cddir="$(env | grep 'mod_\S*_root' | sed 's/[^=]*=\(.*\)$/\1/' | fzf -1 -q "$query" )"
        [[ -n $cddir ]] && cd "$cddir"
    }
}
