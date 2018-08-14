shellref ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    local shellrefdir="~/sandbox/shellref"
    local shellreffile="$shellrefdir/$1.txt"
    if [[ -e "$shellreffile" ]]; then
        cat "$shellreffile" | {
            if [[ $2 ]]; then
                grep "$@"
            else
                cat
            fi
        }
    else
        return 1
    fi
}
