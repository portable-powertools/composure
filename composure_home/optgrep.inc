optgrep ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    if [[ -n $1 ]]; then
        grep "$@"
    else
        cat
    fi
}
