#!/bin/bash

# $1 is folder, $2 is solution or answer
g++ ./problems/$1/$2.cpp -o ./problems/$1/$2
./problems/$1/$2

node ./problems/$1/$2.js
