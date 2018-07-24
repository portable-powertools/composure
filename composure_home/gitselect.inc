gitselect ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    echo 1 | filter : '[[ -d "$line" ]]' | filter : 'isGit "$line"' | interactiveSelect --preview '(cd {}; git remote update; git status -uno; git remote -v;)' "$@"
}
