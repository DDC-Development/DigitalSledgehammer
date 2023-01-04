#!/bin/bash

# Set up your computer to compile Digital Sledgehammer

# If we are root...
if [[ "$EUID" = 0 ]]; then
    # ...We can install everything we need, and upgrade the user too 
    sudo apt update -y
    sudo apt upgrade -y
    sudo apt dist-upgrade -y
    sudo apt full-upgrade -y
    sudo apt install g++-mingw-w64-x86-64-posix -y
    sudo apt install g++-mingw-w64-x86-64-win32 -y
    sudo apt install g++ gcc -y
    sudo apt autoremove
# If we aren't root...
else
    # Then tell the user their mistake, and exit.
    echo "Root access is needed to run this script."
    echo "Try again, prepending \"sudo\""
    exit
fi