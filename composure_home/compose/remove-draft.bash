function remove-draft ()
{
  about 'tries to remove a draft from the composure repository'
  param '1: the name of the draft'
  group 'compose'
  author 'simlei'
  
  if [[ -f "$(_get_composure_dir)/${1}.inc" ]]; then 
    rm "$(_get_composure_dir)/$1.inc"
  else
    echo "No such file $(_get_composure_dir)/$1.inc"
    return 1
  fi
}
