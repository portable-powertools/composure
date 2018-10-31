vimrg ()
{
    author 'Simon Leischnig'
    about 'vim sink for ripgrep calls'
    param '1: optional --ni for --no-ignore-vcs'
    param 'vararg: ripgrep parameters'
    example 'vimrg --ni pattern'
    group 'vim'
    group 'ripgrep'

    local flags=("--vimgrep")
    while [[ $1 ]]; do
        if [[ "$1" == '--ni' ]]; then
            flags+=("--no-ignore-vcs")
            shift;
            continue;
        fi
        break;
    done
    vim +':copen' -q <(rg "${flags[@]}" "$@")
}
