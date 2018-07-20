galias ()
{
    author 'Simon Leischnig'
    about 'shows all git aliases'
    param ''
    example ''
    group ''
    alias | grep --color=never git | { 
        if [[ $1 ]]; then grep "$@"; else cat; fi
    }
}
