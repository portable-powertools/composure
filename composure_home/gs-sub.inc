gs-sub ()
{ (
    author 'Simon Leischnig'
    about 'does git status for the base and for the subdirectories'
    param ''
    example ''
    group ''

    is_git() {
        git status >/dev/null 2>&1
    }

    subroutine() {
        
        cd "$1"
        if is_git; then
            echo "=============== $1"
            git status
        fi
    }

findmmt 0 1 d | lambda : '(subroutine $line)'
) }
