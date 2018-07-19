rotateScreens ()
(
    author 'SimonL'
    about 'rotates the screens according to their xrandr order. supply for each monitor a rotation argument (absolute)'
    param 'for each screen, "normal, right, left, inverted"'
    example 'rotateScreens normal left'
    group 'system'
    function buildCmd() { 
	    printf 'xrandr'
	    while [ $1 ]; do
		{
		    read name
		    printf " --output $name --rotate $1"
		    shift
		}
	    done < <(listmonitors)
	    printf '\n'
    }
    $(buildCmd "$@")
)

