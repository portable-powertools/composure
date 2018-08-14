link_compilecommands ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''
    local ccmds="$(find . -name 'compile_commands.json' | head -n 1)"
    if [[ ! $ccmds ]]; then
        log_error no compile_commands.json found
        return 1
    fi
    ln -s "$ccmds" ./compile_commands.json
}
