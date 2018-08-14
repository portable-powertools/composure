meval ()
{
    author 'Simon Leischnig'
    about 'multiple commands evaluation'
    param 'each arg is a command'
    example 'meval "echo 2" "echo 3"'
    group 'stdlib util'
    
    while [[ -n "${1+set}" ]]; do
        eval "$1"
        shift;
    done
}
