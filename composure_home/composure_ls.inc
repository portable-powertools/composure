composure_ls ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    ( cd "$mod_composure_root"/composure_home
    find . -type f -name '*.inc' | sed 's/\.inc$//' | sed 's|^\./||' )
}
