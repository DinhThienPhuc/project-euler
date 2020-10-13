#!/bin/bash

mkdir $1
touch $1/input.h
touch $1/answer.cpp
touch $1/answer
touch $1/solution.cpp
touch $1/solution

echo "#ifndef _" >>$1/input.h
echo "#define _ " >>$1/input.h
echo "#endif // _" >>$1/input.h

echo "#include <iostream>" >>$1/answer.cpp
echo "#include \"input.h\"" >>$1/answer.cpp
echo "using namespace std;" >>$1/answer.cpp
echo "int main() { return 0;}" >>$1/answer.cpp

echo "#include <iostream>" >>$1/solution.cpp
echo "#include \"input.h\"" >>$1/solution.cpp
echo "using namespace std;" >>$1/solution.cpp
echo "int main() { return 0;}" >>$1/solution.cpp
