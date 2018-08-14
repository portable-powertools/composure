shellref ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    local shellrefdir="$HOME/sandbox/shellref"
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
        log_error no shellref for "$1" - displaying --help
        "$1" --help
    fi
}
