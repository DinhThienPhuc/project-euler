#!/bin/bash

# $1 is folder name aka number of problem set. ex 0007
# $2 is problem name in snake-uppercase. ex _10001st_PRIME

mkdir problems/$1
touch problems/$1/input.h
touch problems/$1/input.js

touch problems/$1/answer.js
touch problems/$1/answer.cpp
touch problems/$1/answer

touch problems/$1/solution.js
touch problems/$1/solution.cpp
touch problems/$1/solution

touch problems/$1/all.test.js
touch problems/$1/index.js

echo "#ifndef $2" >>problems/$1/input.h
echo "#define $2" >>problems/$1/input.h
echo "#endif // $2" >>problems/$1/input.h

echo "/**" >>problems/$1/input.js
echo "* $2" >>problems/$1/input.js
echo "*/" >>problems/$1/input.js
echo "module.exports = {}" >>problems/$1/input.js

echo "#include <iostream>" >>problems/$1/answer.cpp
echo "#include \"input.h\"" >>problems/$1/answer.cpp
echo "using namespace std;" >>problems/$1/answer.cpp
echo "int main() {" >>problems/$1/answer.cpp
echo "cout << \"C++: \" << \"\" << \"  - (answer)\" << endl;" >>problems/$1/answer.cpp
echo "return 0;" >>problems/$1/answer.cpp
echo "}" >>problems/$1/answer.cpp

echo "module.exports = () => {}" >>problems/$1/answer.js

echo "#include <iostream>" >>problems/$1/solution.cpp
echo "#include \"input.h\"" >>problems/$1/solution.cpp
echo "using namespace std;" >>problems/$1/solution.cpp
echo "int main() {" >>problems/$1/solution.cpp
echo "cout << \"C++: \" << \"\" << \"  - (solution)\" << endl;" >>problems/$1/solution.cpp
echo "return 0;" >>problems/$1/solution.cpp
echo "}" >>problems/$1/solution.cpp

echo "module.exports = () => {}" >>problems/$1/solution.js

echo "const solution = require(\"./solution.js\")" >>problems/$1/all.test.js
echo "const answer = require(\"./answer.js\")" >>problems/$1/all.test.js
echo "describe(\"[$2] - Test solution:\", () => {" >>problems/$1/all.test.js
echo "test(\"\", async () => { expect(solution()).toEqual() })" >>problems/$1/all.test.js
echo "})" >>problems/$1/all.test.js
echo "describe(\"[$2] - Test answer:\", () => {" >>problems/$1/all.test.js
echo "test(\"\", async () => { expect(answer()).toEqual() })" >>problems/$1/all.test.js
echo "})" >>problems/$1/all.test.js

echo "const {} = require(\"./input.js\")" >>problems/$1/index.js
echo "const solution = require(\"./solution.js\")" >>problems/$1/index.js
echo "const answer = require(\"./answer.js\")" >>problems/$1/index.js
echo "console.log(\"JS: \", solution(), \" - (solution)\")" >>problems/$1/index.js
echo "console.log(\"JS: \", answer(), \" - (answer)\")" >>problems/$1/index.js
