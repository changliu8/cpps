#! bin/bash

g++ -o "$1" "$1".cpp
echo "g++ -o $1 $1.cpp"
echo "result:"
./"$1"
rm "$1"