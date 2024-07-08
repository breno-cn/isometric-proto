    DIRECTORY="."
#
# Loop through each PNG file in the directory
for FILE in "$DIRECTORY"/*.png; do
  # Extract the base name (without the directory path)
  BASENAME=$(basename "$FILE")
  
  # Use a regex to match and remove leading zeroes
  NEWNAME=$(echo "$BASENAME" | sed -E 's/tile_0*([1-9][0-9]*)/tile_\1/')
  
  # Rename the file if the name has changed
  if [ "$BASENAME" != "$NEWNAME" ]; then
    mv "$FILE" "$DIRECTORY/$NEWNAME"
  fi
done
