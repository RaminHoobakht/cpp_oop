#! /bin/bash

clear
ls -ls archive/src_*
echo "enter file number: "
read -r file_no

### ----------------------------------------------

git add --all
git commit -m 'before creating new source file'

### ----------------------------------------------

mkdir archive/src_"$file_no"

cp -r src/* archive/src_"$file_no"/
cp -r CMakeLists.txt archive/src_"$file_no"/

# cp -r sample/sample_src/cmake_default.txt CMakeLists.txt
# cp -r sample/sample_src/app/* src/app/

### ----------------------------------------------

now="$(date +"%T")"

# printf '%s\n' "/* Subject:  */

# #include \"main.hpp\"


# int main() {

#     LF;


#     out << \"\n #($now): The End ...\" << eln;
#     return EXIT_SUCCESS;
# }" > src/app/main.cpp

printf '\n%s\n' "//($now)" >> src/app/main.cpp

### ----------------------------------------------

git add --all
git commit -m 'after creating new source file'
