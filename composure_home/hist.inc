hist ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    history | tail -n ${1:-10} | cut -d ' ' -f 5-
}
