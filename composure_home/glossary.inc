glossary () 
{ 
    about 'displays help summary for all functions, or summary for a group of functions';
    param '1: optional, group name';
    example '$ glossary';
    example '$ glossary misc';
    group 'composure';
    typeset targetgroup=${1:-};
    typeset functionlist="$(_typeset_functions_about)";
    typeset maxwidth=$(_longest_function_name_length "$functionlist" | awk '{print $1 + 5}');
    for func in $(echo $functionlist);
    do
        if [ "X${targetgroup}X" != "XX" ]; then
            typeset group="$(typeset -f -- $func | metafor group)";
            if [ "$group" != "$targetgroup" ]; then
                continue;
            fi;
        fi;
        typeset about="$(typeset -f -- $func | metafor about)";
        typeset aboutline=;
        echo "$about" | fmt | while read -r aboutline; do
            _letterpress "$aboutline" "$func" "$maxwidth";
            func=" ";
        done;
    done
}
