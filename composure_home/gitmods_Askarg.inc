gitmods_Askarg ()
{
    author 'Simon Leischnig'
    about 'asks for an argument for each git module and exits if negative'
    param 'more init commands, possibly dependent on $arg'
    example 'gitmods_Askarg "commit -m \$arg"'
    group ''
    gitmods --Ask 'read -r arg </dev/tty' "$@"
}
