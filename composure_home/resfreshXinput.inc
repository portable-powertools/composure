resfreshXinput ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
   
    if [[ -z "${1+set}" ]]; then
        log_error "xinput: device name needed"
        return 1
    fi
    xinput disable "$1"
    xinput enable "$1"

}
