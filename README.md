# Welcome to Digital Sledgehammer

<<<<<<< HEAD
This tool is a simple Command Line tool (a bit similar to Windows CMD or bash), that doesn't really do much now.
When it starts to do more, I'll be sure to add some docs to the project (probably in `root/docs`)


# You Will Need (Compiling)
- A Linux Computer
- Internet access

# You Will Need (Running)
- A Linux or Windows computer

# How to compile

Note that these instructions are linux-only – see You Will Need (Compiling)
Clone the directory with `git clone https://github.com/DDC-Development/Digital-Sledgehammer.git && cd DigitalSledgehammer/`<br/>
Run the HostSetup file to prepare your computer: `sudo ./HostSetup`. Make sure to use `sudo` or you will recieve an error.<br/>
Compile with `make`.

# How to Run

To run on Linux, use the command `./dist/linux/DigitalSledgehammer.run`.<br/>
To run on Windows, use the command `explorer dist/windows`, and open the DigitalSledgehammer.exe file.
=======
This tool is a simple Command Line tool (a bit similar to Windwos CMD), that doesn't really do much now.
When it starts to do more, I'll be sure to add some docs to the project (probably in `root/docs`)


## Use on Linux
To use it now, just copy the excecutable file in `bin/` to your `/usr/bin`, and then use the ds-start command in a terminal window.

## Use it on Windows
To use it now, go to `build-ds.bat` and follow the instructions there. Build the project, and then copy `ds-start.exe` file to whatever directory you like (maybe your `%PATH%`?), and then run it from a terminal. Don't ask me how to run it from a terminal, I don't know, because I use Linux (<a href="https://github.com/canonical">@canonical</a>). If you are on either Linux or macOS, and you want to build for windows, go to the `build-ds.sh` and follow the instructions there.

## Use on macOS
To use it now, just copy the excecutable file in `bin/` to your `/usr/bin`, and then use the ds-start command in a terminal window.

<b>*Please note that this project builds using GCC (so you must have that in your %PATH% if you're on Windows), at -Wall, -Wextra, and -Werror.*-</b>
>>>>>>> ce8a2e066be96a6f00c4bc5afe653cd79edd9a58
