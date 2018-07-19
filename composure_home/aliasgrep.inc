aliasgrep ()
{
    author 'SimonL'
    about 'greps bash-it for aliases'
    param ':1 alias pattern and everything that grep might accept'
    example 'aliasgrep diff'
    group 'bash-it'
    bash-it help aliases | grep --color=auto $@
}
