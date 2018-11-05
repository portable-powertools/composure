git-filter ()
{
    author 'Simon Leischnig'
    about 'filters a git branch so it does not include a file/glob anymore; SERIOUS work to be done still to remedy hash incongruences w/ collaborators!'
    param '1: the repo-relative path/glob to filter'
    example 'git-filter "backup/*"'
    group 'git'

    git filter-branch --index-filter 'git rm --cached --ignore-unmatch '"$1" --prune-empty --tag-name-filter cat -- --all
}
