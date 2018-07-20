rexfind ()
{
    author 'SimonL'
    about 'short form for find command using an absolute path and extended regex'
    param ':1 '
    example 'rexfind "$(pwd)" '\..*' -maxdepth 1'
    group 'layout1'

    local path="$PWD"
    if [[ $1 ]]; then
        path="$1"
        shift
    fi
    find $( [ $(pathIsAbsolute "$path") ] || expand_path "$path"} ) -regextype posix-extended -regex "$@"
}
