netcat_shell ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    local fifo="$(mktemp -u -t fifo_XXXXXX)".$$.$RANDOM
    mkfifo -m 0600 "$fifo"
    cat "$fifo" | /bin/sh -i 2>&1 | netcat -l 127.0.0.1 ${1:-1234} > "$fifo"
}
