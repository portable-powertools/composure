shellref ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    local shellrefdir="$HOME/sandbox/shellref"
    local shellreffile="$shellrefdir/$1.txt"
    ( if [[ -f "$shellreffile" ]]; then
    cat "$shellreffile" 
else
    log_error "no shellref for $1, trying $1 --help"
    "$1" --help
fi ) | ( if [[ $2 ]]; then
                grep "$@"
            else
                cat
            fi
        )
}
