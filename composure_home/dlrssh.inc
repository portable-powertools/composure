dlrssh ()
{
    author 'SimonL'
    about 'ssh to my dlr computer'
    param ''
    example ''
    group 'system'
    
    local localport=2222
    local remoteport=22
    local pcname=RMC-LX0083

    local address="$localport:$pcname:$remoteport"
    local loginname="leis_si"
    local hostname="ssh.robotic.dlr.de"

    ssh -l "$loginname" -L "$address" "$hostname" "$@"
}
