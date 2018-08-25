md ()
{
    author 'Simon Leischnig'
    about 'makes a directory and its parents and cds. should never fail, even when the dir is already existent.'
    param 'the directory name'
    example ''
    group 'system'
    ( mkdir -p "$1" && cd "$1" )
}
