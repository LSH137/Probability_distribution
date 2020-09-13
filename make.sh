#!/bin/bash

echo "compile"

g++ -c class.cpp -lmpfr -lgmp
g++ -c main.cpp -lmpfr -lgmp
g++ -o sampling main.o class.o -lmpfr -lgmp -m64 -o2

echo "end"