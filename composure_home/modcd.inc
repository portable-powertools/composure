modcd ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    {
        cddir="$(env | grep 'mod_\S*_root' | sed 's/[^=]*=\(.*\)$/\1/' | fzf)"
        [[ -n $cddir ]] && cd "$cddir"
    }
}
