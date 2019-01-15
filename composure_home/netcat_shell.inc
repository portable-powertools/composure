netcat_shell ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    cat /tmp/f | /bin/sh -i 2>&1 | nc -l 127.0.0.1 1234 > /tmp/f
}
