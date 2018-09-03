aliases ()
{
    author 'Simon Leischnig'
    about 'lets a user search aliases first by a major keyword, and then by an optional minor'
    param '1: a major keyword, '
    example 'aliases -E "git.+" "push" -- first level grep gets -E and the extended regexp, the second level grep searches for "push" with standard regexp'
    group 'system'
    group 'util'

    local -a majorargs=()
    while [[ "$1" == '-'* ]]; do
        majorargs+=("$1")
        shift
    done
    if [[ "$1" ]]; then
        majorargs+=("$1")
        shift
    else
        log_error "need major grep argument in 'aliases' function"
    fi

    # alias | grep --color=never "${majorargs[@]}" | {
    alias | grep "${majorargs[@]}" | {
        
        if [[ -n "$*" ]]; then
            grep "$@"
        else
            cat
        fi
    }
}
