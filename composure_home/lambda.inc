lambda () 
{ 
    vecho 0 asdfkasdjflksjdf
    local logtag="[$RANDOM]";
    local with_arrays=1;
    local delim;
    local arglist;
    local body;
    { 
        IFS='' read -r delim;
        IFS='' read -r arglist;
        IFS='' read -r body
    } < <(_lambda_params "$@");
    vechoOn DEBUG_LAMBDA 6 "$logtag sig: lambda $* arglist: '$arglist', body: '$body'";
    while IFS='' read -r line; do
        IFS="$delim" read -r $arglist linerest <<< "$line";
        if [[ $with_arrays == 1 ]]; then
            declare -a linearr;
            declare -a restarr;
            IFS="$delim" read -ra linearr <<< "$line";
            IFS="$delim" read -ra restarr <<< "$rest";
        fi;
        vechoOn DEBUG_LAMBDA 6 "$logtag line: '$line' ::: eval:" "$body";
        eval "$body";
    done
}
