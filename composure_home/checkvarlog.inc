checkvarlog ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    local hsize="$( du -sh /var/log 2> /dev/null | lambda size rest : 'varecho size' | sed 's/M/ Megabytes/g' | sed 's/G/Gigabytes/g' | sed 's/K/ Kilobytes/g' )"
    local size="$( du -s /var/log 2> /dev/null | lambda size rest : 'varecho size')"
    log_error "$*" "is the arg list"
    
    if [[ "$size" -gt '500000' ]]; then
        synthmsg 'sorry, but your log folder is at '"$hsize"' again'
        if [[ "$1" == '-p' ]]; then
            vecho 0 "$hsize"
        fi
        return 1
    else
        log_error "$*" "is the arg list, $1 is arg 1" "$size is the size"
        log_error bla "$*"
        if [[ "$1" = '-p' ]]; then
            vecho 0 "$hsize"
        fi
    fi
    return 0
}
