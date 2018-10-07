tsfiles ()
{
    author 'Simon Leischnig'
    about 'list touchstone-related files in all loaded modules'
    param ''
    example ''
    group 'touchstone'
    modls | lambda : 'find $line -maxdepth 2 -type f -name "*.layout" -o -name "*.sh"'
}
