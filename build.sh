#!/bin/bash
echo "Building Atomic Cats projects..."
cd projects/backend
g++ sorter.cpp -o sorter.out
g++ square.cpp -o square.out
g++ cryptocat.cpp -o cryptocat.out
g++ text_fight.cpp -o text_fight.out
echo "Done!"
