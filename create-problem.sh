#!/bin/bash

# $1 is folder name aka number of problem set. ex 0007
# $2 is problem name in snake-uppercase. ex _10001st_PRIME

mkdir problems/$1
touch problems/$1/input.h

touch problems/$1/answer.cpp
touch problems/$1/answer

touch problems/$1/solution.cpp
touch problems/$1/solution

echo "#ifndef $2" >>problems/$1/input.h
echo "#define $2" >>problems/$1/input.h
echo "#endif // $2" >>problems/$1/input.h

echo "#include <iostream>" >>problems/$1/answer.cpp
echo "#include \"input.h\"" >>problems/$1/answer.cpp
echo "using namespace std;" >>problems/$1/answer.cpp
echo "int main() {" >>problems/$1/answer.cpp
echo "cout << \"C++: \" << \"\" << \"  - (answer)\" << endl;" >>problems/$1/answer.cpp
echo "return 0;" >>problems/$1/answer.cpp
echo "}" >>problems/$1/answer.cpp

echo "#include <iostream>" >>problems/$1/solution.cpp
echo "#include \"input.h\"" >>problems/$1/solution.cpp
echo "using namespace std;" >>problems/$1/solution.cpp
echo "int main() {" >>problems/$1/solution.cpp
echo "cout << \"C++: \" << \"\" << \"  - (solution)\" << endl;" >>problems/$1/solution.cpp
echo "return 0;" >>problems/$1/solution.cpp
echo "}" >>problems/$1/solution.cpp
