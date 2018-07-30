gitmods_pushroutine ()
{
    author 'Simon Leischnig'
    about 'opens a minimal UI on git repos in "gitmods_ls" and  opens a shell on each of them'
    param ''
    example ''
    group ''
    gitmods --ask 'git remote update; fetch origin; git status -uno' 'gall; git commit -m powerupdate' 'git push origin master'
}
