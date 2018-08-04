buildmodselect ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    listgibmods | interactiveSelect --preview '(cd {}; )' "$@"
}
