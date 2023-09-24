#!/bin/bash

source_files=(*.c)

# Check if there are any .c files
if [ ${#source_files[@]} -eq 0 ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# compile the .c files into .o files

for source_file in "${source_files[@]}"; do
    object_file="${source_file%.c}.o"
    gcc -c "$source_file" -o "$object_file"
done

# create the static library liball.a from the .o files
ar rc liball.a *.o

#clean up by removing the .o files
rm -f *.o

echo "Static library liball.a created successfully!"
