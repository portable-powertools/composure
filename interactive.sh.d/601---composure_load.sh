mod_composure_repo="$mod_composure_root/composure_home"
source "$mod_composure_sw/composure.sh"

#added -follow
_list_composure_files () {
  typeset composure_dir="$(_get_composure_dir)"
  [ -d "$composure_dir" ] && find "$composure_dir" -follow -maxdepth 1 -name '*.inc'
}
