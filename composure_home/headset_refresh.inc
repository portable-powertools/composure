headset_refresh ()
{
    author 'Simon Leischnig'
    about ''
    param ''
    example ''
    group ''

    local pattern='bluez_card\S*'
    BLUEZCARD=$(pactl list cards short | egrep -o "$pattern")
    if [[ ! $BLUEZCARD ]]; then
        echo 'did not find bluetooth card ("pactl list cards short | egrep '"$pattern"'")'
        return 1
    fi
    pactl set-card-profile $BLUEZCARD headset_head_unit
    pactl set-card-profile $BLUEZCARD a2dp_sink
}
