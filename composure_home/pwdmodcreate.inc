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
    local modrootname="$(echo "mod_$(pwdmodname)_root")"
    {
        extract_pathadd TS_MODULES '' "\$$modrootname"
        printf 'export %s\n' "$modrootname"
        [[ -n $old ]] && echo "$old"
    } > module.sh ) || return 0
}
