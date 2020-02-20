#!/bin/bash

mkdir $1
touch $1/input.h
touch $1/main.cpp
touch $1/output

echo "#ifndef _" >> $1/input.h
echo "#define _ " >> $1/input.h
echo "#endif // _" >> $1/input.h

echo "#include <iostream>" >> $1/main.cpp
echo "#include \"input.h\"" >> $1/main.cpp
echo "using namespace std;" >> $1/main.cpp