composure_write ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    write headset_refresh | sed 's/^\s*echo "edit me.*/  headset_refresh  || exit 1/' > $mod_composure_root/scripts.bin.d/headset_refresh.sh
}
