gitmods_pullroutine ()
{
    author 'Simon Leischnig'
    about 'opens a minimal UI for selecting git repos listed by gitmods_ls and opening a shell on them'
    param ''
    example ''
    group 'git touchstone'
    gitmods --ask 'git remote update; git fetch origin; git status -uno' 'git pull' 'exit'

}
