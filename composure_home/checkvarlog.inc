checkvarlog ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    du -sh /var/log 2> /dev/null | lambda size rest : 'varecho size' | sed 's/M/ Megabytes/g' | sed 's/G/Gigabytes/g'
}
