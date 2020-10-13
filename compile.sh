#!/bin/bash

# $1 is folder, $2 is solution or answer
g++ ./$1/$2.cpp -o ./$1/$2
./$1/$2
