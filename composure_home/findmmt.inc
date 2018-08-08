findmmt ()
{
    author 'Simon Leischnig'
    about 'shortcut for specifying maxdepth, mindepth, type if has 3rd'
    param '1: directory'
    param '2: maxdepth'
    param '3: maxdepth'
    param '4: optional type flag'
    example 'findmmt 1 1 d [...] for finding all directories in pwd, but not .'
    group 'util'
   
    local dir="$1"
    shift

    local min="$1"
    local max="$2"
    if [[ $3 ]]; then
        local typeargs="-type $3"
    else
        local typeargs=''
    fi
    shift; shift; shift;
    find "$dir" -mindepth "$min" -maxdepth "$max" $typeargs "$@"
}
