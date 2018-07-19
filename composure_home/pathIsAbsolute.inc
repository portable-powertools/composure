pathIsAbsolute ()
{
    author 'SimonL'
    about 'tests whether a path is absolute'
    param ':1 the path'
    example ''
    group 'layout1'
    [[ "${1:?"provide a path!"}" = /* ]]
}
