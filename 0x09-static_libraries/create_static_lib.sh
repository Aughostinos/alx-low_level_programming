#!/bin/bash

# Find all .c files in the current directory
source_files=$(find . -maxdepth 1 -type f -name "*.c")

# Check if there are any .c files
if [ -z "$source_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile each .c file into an object file
for source_file in $source_files; do
    object_file="${source_file%.c}.o"
    gcc -c "$source_file" -o "$object_file"
    if [ $? -ne 0 ]; then
        echo "Compilation failed for $source_file"
        exit 1
    fi
done

# Create the static library
ar rcs liball.a *.o

# Clean up object files
rm -f *.o

echo "Static library liball.a created successfully."
