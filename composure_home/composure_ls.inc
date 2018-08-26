composure_ls ()
{
    author 'Simon Leischnig'
    about 'lists composure files, stripping extension and parent path, effectively tryuing to list all custom functions'
    param ''
    example ''
    group 'composure'
    ( cd "$mod_composure_root"/composure_home
    find . -type f -name '*.inc' | sed 's/\.inc$//' | sed 's|^\./||' | sort )
}
