netcat_shell-client ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    nc localhost 1234 | {
        while IFS= read -r line; do
            echo -e "$line"
        done
    }
}
