isRotated ()
{
    author 'SimonL'
    about 'checks if the surface Pro 3 screen is rotated'
    param ''
    example ''
    group 'system/sp3'
    xrandr --screen 0 | grep --color=auto 'eDP-1 connected primary 1440'
}
