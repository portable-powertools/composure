pwdmodvalid ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    {
        cat module.sh | head -n 1 | grep '^export TS_MODULES='
    } 2> 1 > /dev/null
}
