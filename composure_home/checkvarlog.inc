checkvarlog ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    local hsize="$( du -sh /var/log 2> /dev/null | lambda size rest : 'varecho size' | sed 's/M/ Megabytes/g' | sed 's/G/Gigabytes/g' | sed 's/K/ Kilobytes/g' )"
    local size="$( du -s /var/log 2> /dev/null | lambda size rest : 'varecho size')"
    
    if [[ "$size" -gt '500000' ]]; then
        synthmsg 'sorry, but your log folder is at '"$hsize"' again'
        if [[ "$1" == '-p' ]]; then
            vecho 0 "$hsize"
        fi
        return 1
    else
        if [[ "$1" == '-p' ]]; then
            vecho 0 "$hsize"
        fi
    fi
    return 0
}
