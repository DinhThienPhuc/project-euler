#!/bin/bash

# $1 is problem set number path ( problems/0007), $2 is solution or answer (solution/answer)
g++ ./$1/$2.cpp -o ./$1/$2
./$1/$2

if [ -f ./problems/$1/$2.js ]; then
    node ./problems/$1/$2.js
fi
