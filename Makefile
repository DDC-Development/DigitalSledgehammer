# This makefile currently only supports compiling for Linux.
# If you have devised a solution for compiling on macOS or Windows,
# please start a pull request, and submit it for approval :)

all: compile-for-linux compile-for-windows

# Untested, potentially unstable
compile-for-linux:
	g++ -Wall -Wextra -Wpedantic -Werror -O2 src/Main.cpp -o dist/linux/DigitalSledgehammer.run
compile-for-windows:
	x86_64-w64-mingw32-g++ src/Main.cpp -o dist/windows/DigitalSledgehammer.exe -lurlmon -Wall -Wextra -Wpedantic -Werror -O2