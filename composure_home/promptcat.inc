promptcat ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''

    local prompt="${1:-cat> }"
    printf '%s' "$prompt" 1>&2
    while IFS= read -r line; do
        echo "$line"
        printf '%s' "$prompt" 1>&2
    done

}
