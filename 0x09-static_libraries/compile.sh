#!/bin/bash

# List of all my source fiels (replace with)
source_files=("_putchar.c" "0-isupper.c" "0-memset.c" "0-strcat.c" "1-isdigit.c" "1-memcpy.c" "1-strncat.c" "2-strchr.c" "2-strlen.c" "2-strncpy.c" "3-islower.c" "3-puts.c" "3-strcmp.c" "3-strspn.c" "4-isalpha.c" "4-strpbrk.c" "5-strstr.c" "6-abs.c" "9-strcpy.c" "100-atoi.c")

for source_file in "${source_files[@]}"; do
object_file="${source_file%.c}.o"

# Compile the source file into the object file
gcc -c "$source_file" -o "$object_file"

# print message to indicate compilation status
echo "Compiled: $source_file -> $object_file"

done
