synthmsg ()
{
    author 'Simon Leischnig'
    about 'synthesises a voce message'
    param 'the message'
    example ''
    group ''
    spd-say -r 20 -t female3 -m none "$@"
}
