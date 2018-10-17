ip ()
{
    author 'Simon Leischnig'
    about 'starts ipython with magic commands enabled'
    param ''
    example ''
    group ''
    ipython -c 'get_ipython().magic("load_ext autoreload"); get_ipython().magic("autoreload 2")' -i "$@"
}
