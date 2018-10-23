pyvimrg ()
{
    author 'Simon Leischnig'
    about 'searches all files (no ignore vcs for nested repos) for python matches and opens vim with the matches in the quickfix list'
    param 'rg flags'
    example 'pyvimrg -F "attrObject"'
    group 'rg'
    group 'python'
    group 'refactor'
    vimrg --no-ignore-vcs --glob '*.py' "$@"
}
