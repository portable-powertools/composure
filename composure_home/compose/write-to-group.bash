function write-to-group () 
{ 
    about 'writes a function to the BASH_IT_CUSTOM directory under its group subdir and prints that new file'
    group 'compose'
    param '1: the function name to write unter the specified group in BASH_IT_CUSTOM dir'
    param '2: optional new filename under that group, except ".bash"'
    group 'compose'
    author 'simlei'
    
    [ -z $1 ] && { 
        log_error "supply a function name!";
        return 1
    };
    local GROUP=$(typeset -f $1 | metafor group);
    [[ -z $GROUP ]] && { 
        log_error "could not extract group of $1";
        return 1
    };
    [ ! -d $(_get_composure_dir) ] && { 
        log_error "No composure repository present! should be at $(_get_composure_dir). Please create first using composure functionality!";
        return 1
    };
    mkdir -p "$(_get_composure_dir)/$GROUP";
    ( set -e;
      local NEWFILE="$(_get_composure_dir)/$GROUP/${2:-$1}.bash";
      typeset -f ${1} > "$NEWFILE";
      source "$NEWFILE"
      
      if [[ -f "$(_get_composure_dir)/${1}.inc" ]]; then 
        rm "$(_get_composure_dir)/$1.inc"
      fi
      echo $NEWFILE
    )
}
