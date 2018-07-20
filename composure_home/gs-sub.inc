gs-sub ()
{
    author 'Simon Leischnig'
    about 'does git status for the base and for the subdirectories'
    param ''
    example ''
    group ''
    findmmt 0 1 d | lambda : '(cd "$line"; git status)'
}
