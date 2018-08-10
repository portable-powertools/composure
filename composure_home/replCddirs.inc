replCddirs ()
{ 
    local init="$(linewise_args "$@" | joinlines '; ')";
    local cmd="$(printf 'replCddirPre "$dir" || exit; cd "$dir"; %s )' "$init")";
    linewise_args | errortee 0 "[linewise cddirs]";
    replForeach --lambda '-t dir rest' -p "cd-REPL" -m 'replCddirPre "$dir" || exit' 'cd "$dir"' "$@"
}
