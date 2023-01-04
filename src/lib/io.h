// IO.h
// For the Digital Sledgehammer project
// (c) LukeChemeriov, 2022

// Preprocessor statements
#include <iostream>
#pragma once

// Replacement for DS_IO.kscanf()
// We don't need a replacement for kprintf, just use std::cout
std::string PromptUserForInput(std::string prompt = "$")
{
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    return input;
}