appender ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    lambda : '{ echo "# $line {{{"; eval "$line"; echo "# $line END }}}"; } >> onefile.sh'
}
