appender ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    local outfile="${1:-appended}"
    lambda : '{ echo "# $line {{{"; eval "$line"; echo "# $line END }}}"; } >> "$outfile"'
}
