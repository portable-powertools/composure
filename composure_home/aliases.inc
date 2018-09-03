aliases ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    alias | grep --color=never "$major" | {
        if [[ -n $1 ]]; then
            grep "--color=never" "$@"
        else
            cat
        fi
    }
}
