replForeach () 
{ 
    if [[ "$1" == "--lambda" ]]; then
        local lambdaargs="$2";
        shift;
        shift;
    else
        local lambdaargs="-t this";
    fi;
    declare -a replargs;
    replargs=();
    while [[ -n "${1+set}" ]]; do
        replargs+=("$1");
        shift;
    done;
    declare -a lines;
    readarray -t lines;
    lambda $lambdaargs : 'repl "${replargs[@]}"' < <(
        for replLine in "${lines[@]}"; do
            echo "$replLine"
        done
    )
}
