listmonitors ()
{
    author 'SimonL'
    about 'prints the names of the active monitors, line by line'
    param ''
    example ''
    group 'system'
    xrandr --listactivemonitors | sed 's/.* //' | tail -n +2
}
