function edit-to-group () 
{ 
    about 'writes a function to the BASH_IT_CUSTOM directory under its group subdir and prints that new file;'
    group 'compose'
    param '1: the function name to write unter the specified group in BASH_IT_CUSTOM dir'
    param '2: optional new filename under that group, except ".bash"'
    group 'compose'
    author 'simlei'
    
    local NEWFILE=$(write-to-group $@)
    edit "$NEWFILE"
    source "$NEWFILE"
}
