checkvarlogloop ()
{
    author 'Simon Leischnig'
    about 'checks that my log folder doesnt get too big, its a serious issue unfortunately...'
    param ''
    example ''
    group ''
    echo "checking continuously /var/log size with flags $*..."
    while :; do
        checkvarlog "$@"
        sleep 30s
    done
}
