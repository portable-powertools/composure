linkshallow ()
{
    author 'SimonL'
    about 'moves a directory to a castle and replaces it with a link'
    param '1: the directory'
    param '2: the castle name (must exist)'
    param '3: the subfolder (e. g. data, config)'
    example ''
    group 'homeshick'
    
    local ORIG="$1"
    local TARGET="$PLACES/_homeshickrepos/$2/$3" 
    ( 
      set -e
      if [[ -e "$TARGET/$ORIG" ]]; then { echo "$TARGET/$ORIG already exists"; return 1; } fi
      mkdir -p "$TARGET"
      mv "$ORIG" "$TARGET"
      ln -s "$TARGET/$(basename $ORIG)" "$ORIG"
    )
}
    
