vless ()
{
    author 'Simon Leischnig'
    about 'less replacement usng vim'
    param 'vim syntax additional params'
    example 'ls -la | vless'
    group 'system vim'
    vim +':setlocal buftype=nofile' +'nnoremap <Leader>q :q' -
}
