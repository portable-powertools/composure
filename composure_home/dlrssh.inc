dlrssh ()
{
    author 'SimonL'
    about 'ssh to my dlr computer'
    param ''
    example ''
    group 'system'
    
    set -- leis_si RMC-LX0083 2222 22 ssh.robotic.dlr.de
    ssh -l "$1" -L "$3:$2:$4" $5
}
