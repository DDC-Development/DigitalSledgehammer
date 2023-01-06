// Main.cpp
// The main file for the DigitalSledgehammer project

// Include files
#include "lib/io.h"
#include "ds.h"
#include "lib/header-functions.h"
#include "lib/io.h"

#include <iostream>

// The good-old-fashioned main
int main()
{
    // Register all functions
    RegisterFunctions();

    // Variable declarations
    std::string input;
    std::string CommandName;
    std::string args;
    
    // Main loop
    while (true)
    {
        // Isolate the command name, and args
        input = PromptUserForInput(">>>");
        // Get a command as input
        
        // Find the first space
        size_t SpacePosition = input.find(" ");
        // If it's a valid position...    
        if (SpacePosition != std::string::npos) 
        {
            // ...use it to seperate the args and command name
            // according to this diagram
            /*

                input = CommandName + ' ' + args;
            
            */
            args = input.substr(SpacePosition + 1);
            CommandName = input.substr(0, SpacePosition);
        }
        // If it's not though...
        else
        {
            // ...then we can safely say that the user didn't give us any
            // args, so let's set up CommandName and args to reflect that
            CommandName = input;
            args = "";
        }
        
        // Now let's move on to actually executing the function

        // If the user's input actually is a function...
        if (CheckKeyExistsInMap(functions, CommandName))
        {
            // then execute it, along with any args there might be 
            functions[CommandName](args);
        }
        // if not...
        else
        {
            // ... maybe they made a mistake? I don't know. Either way,
            // tell them what they've done.
            std::cout << "Command not found: \"" + CommandName + "\". Please check your spelling and try again, or use \"help\" to display commands." << std::endl;
        }
    }
}