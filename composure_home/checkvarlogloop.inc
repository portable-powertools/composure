checkvarlogloop ()
{
    author 'Simon Leischnig'
    about 'checks that my log folder doesnt get too big, its a serious issue unfortunately...'
    param ''
    example ''
    group ''
    checking...
    while :; do
        checkvarlog "$@"
        sleep 1m
    done
}
