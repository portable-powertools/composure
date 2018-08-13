pwdmodvalid ()
{
    author 'Simon Leischnig'
    about 'checks whether the first line of module.sh contains a TS_MODULES path assignment'
    param ''
    example ''
    group 'touchstone'
    {
        cat module.sh | head -n 1 | grep '^export TS_MODULES='
    } >/dev/null 2>&1
}
