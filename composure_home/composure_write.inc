composure_write ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''

    if [[ $1 == "-f" ]]; then
        local force=1
        echo force writing enabled 1>&2
        shift
    fi
    if command -v "$1" 1>/dev/null 2>&1; then
        local fun="$1"
    else
        echo "$1 is not callable" 1>&2
        return 1
    fi
    local scriptname="$mod_composure_root/scripts.bin.d/$fun.sh"
    if [[ ! -e "$scriptfile" || "$force" == '1'  ]]; then
        echo 'specify -f for forcing to overwrite ' "$scriptfile" 1>&2
        return 1
    fi
    write "$fun" | sed 's/^\s*echo "edit me.*/  '$fun'  || exit 1/' > "$scriptname"
    if [[ $? == '0' ]]; then
        chmod +x "$scriptname"
        echo written to "$scriptfile"
    fi

}
