pwdmodname ()
{
    author 'Simon Leischnig'
    about 'evaluates the module name in the current directory'
    param ''
    example ''
    group 'touchstone'
    layout_eval module "$PWD" varecho module_name
}
