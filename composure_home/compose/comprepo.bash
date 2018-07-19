function comprepo () 
{ 
    group 'compose'
    about 'TODO list fiels that are sourced from the composure repo'
    author 'simlei'  
 
    [[ ! -d $(_get_composure_dir) ]] && return 1
    (
      for f in $(_get_composure_dir)/[[:alnum:]]*/*.bash;
      do
        echo $(relto "$f" "$(_get_composure_dir)")
      done
    ) | sort
    (
      for f in $(_get_composure_dir)/*.inc;
      do
          echo $(relto "$f" "$(_get_composure_dir)")
      done
    ) | sort
}


