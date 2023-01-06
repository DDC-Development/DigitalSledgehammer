// Functions.h
// For the Digital Sledgehammer project
// (c) LukeChemeriov, 2022

// Preprocessor statements
#include <string>
#include <iostream>
#include <sstream>
#include "../lib/io.h"
#include "../lib/header-functions.h"


// A simple echo function
void echoFunction(const std::string& userinput)
{
    // if there is a valid size of the string...
    if (userinput.length() > 0)
    {
        // Let's print the text the user gave us
        std::cout << userinput << std::endl;
    }
    // if not...
    else
    {
        // ...Then let's not try and print anything, or we'll crash stuff
        // which is obviously bad
        return;
    }
     
}
// a function to clear the screen
void clearFunction(const std::string& userinput)
{
    // Use the userinput variable to stop G++ complaining
    // I know this is bad practise, but we have to take a variable
    // that we have no use for, so it's kind of necessary. Don't worry
    // though, it's not temporary. That said, there's no more permenant
    // fix than a temporary one...
    userinput.c_str();
    // Clear screen – obviously
    DS_CLEAR_SCREEN
}

// a function to exit the program (why would you want to exit?? is this program not good enough for you?????)
void exitFunction(const std::string& userinput)
{
    // if the user sent us something
    if (userinput.length() > 0)
    {
        //... then let's have a look at whether or not it's a number
        if (DoesStringContainOnlyDigits(userinput))
        {
            // if it is a number, we'll exit with that as the exit code
            std::stringstream ss;
            ss << userinput;
            int returncode;
            ss >> returncode;
            exit(returncode);
        }
        // if it doesn't, then it's just some garbage string that we can ignore
    }
    // if there is no input, let's just exit
    else
    {
        // exit the program
        std::cout << "exit" << std::endl; // a smol UI note
        exit(2); // Exit 2 error code is for a manual shutdown
    }
}