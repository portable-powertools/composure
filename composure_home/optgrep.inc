optgrep ()
{
    author 'Simon Leischnig'
    about 'greps, only when arguments are supplied, else uses cat'
    param ''
    example ''
    group 'util'
    if [[ -n "${1+set}" ]]; then
        grep "$@"
    else
        cat -
    fi
}
