vhelp ()
{
    author 'Simon Leischnig'
    about 'appends --help to the given command (varargs) and pipes it into vim (vless)'
    param 'varargs command'
    example 'vhelp find'
    example 'vhelp git branch'
    group 'helpers'
    "$@" --help 2>&1 | vless
}
