refreshXinput ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
   
    if [[ -z "${1+set}" ]]; then
        log_error "refreshXinput: please supply a device name"
        return 1
    fi
    xinput disable "$1"
    xinput enable "$1"
}
