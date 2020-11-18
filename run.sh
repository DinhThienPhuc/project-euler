#!/bin/bash

# $1 is problem set number path ( problems/0007), $2 is solution or answer (solution/answer)
if [ -f ./$1/solution.cpp ]; then
    g++ ./$1/solution.cpp -o ./$1/solution
    ./$1/solution
fi

if [ -f ./$1/answer.cpp ]; then
    g++ ./$1/answer.cpp -o ./$1/answer
    ./$1/answer
fi

if [ -f ./$1/index.js ]; then
    node ./$1/index.js
fi
