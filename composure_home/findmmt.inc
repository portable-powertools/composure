findmmt ()
{
    author 'Simon Leischnig'
    about 'shortcut for specifying maxdepth, mindepth, type if has 3rd'
    param '1: maxdepth'
    param '2: maxdepth'
    param '2: optional type flag'
    example 'findmmt 1 1 d [...] for finding all directories in pwd, but not .'
    group 'util'
   
    if [[ $3 ]]; then
        local typeargs="-type $3"
    else
        local typeargs=''
    fi
    find -maxdepth "$1" -mindepth "$2" $typeargs "$@"
}
