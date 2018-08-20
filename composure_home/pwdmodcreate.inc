pwdmodcreate ()
{
    author 'Simon Leischnig'
    about 'if the module has no TS_MODULES definition in the module.sh file, create it'
    param ''
    example ''
    group 'touchstone'
    if [[ ! -f module.layout ]]; then
        touch module.layout
    fi
    pwdmodvalid || ( old="$( [ -f module.sh ] && cat module.sh )"
    {
        printf 'export '
        extract_pathadd TS_MODULES '' "\$mod_$(pwdmodname)_root"
        [[ -n $old ]] && echo "$old"
    } > module.sh ) || return 0
}
