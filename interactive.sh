mod_composure_repo="$mod_composure_root/composure_home"

LOAD_COMPOSED_FUNCTIONS=0
source "$mod_composure_sw/composure.sh"

#added -follow
_list_composure_files () {
  typeset composure_dir="$(_get_composure_dir)"
  [ -d "$composure_dir" ] && find "$composure_dir" -follow -maxdepth 1 -name '*.inc'
}
LOAD_COMPOSED_FUNCTIONS=1
_bootstrap_composure
