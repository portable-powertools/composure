synthmsg ()
{
    author 'Simon Leischnig'
    about 'synthesises a voce message'
    param 'the message'
    example ''
    group ''
    spd-say -r 0 -t female3 -m none "$@"
}
