make_lstargets ()
{
    author 'SimonL'
    about 'lists make targets in the current dir'
    param ''
    example ''
    group 'system'
    make -qp | awk -F':' '/^[a-zA-Z0-9][^$#\/\t=]*:([^=]|$)/ {split($1,A,/ /);for(i in A)print A[i]}'
}
