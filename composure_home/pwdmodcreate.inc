pwdmodcreate ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    pwdmodvalid || ( old="$( [ -f module.sh ] && cat module.sh )"
    {
        extract_pathadd TS_MODULES '' "\$mod_$(pwdmodname)_root"
        [[ -n $old ]] && echo "$old"
    } > module.sh )
}
