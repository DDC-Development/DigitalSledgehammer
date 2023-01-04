// IO.h
// For the Digital Sledgehammer project
// (c) LukeChemeriov, 2022

// Preprocessor statements
#include <iostream>
#pragma once

// Digital Sledgehammer IO class
// @deprecated
class DS_IO
{
private:
    std::string input;
public:
    // Constructors and Destructors
    DS_IO(){};
    ~DS_IO(){};

    // Output to console
    void kprintf(std::string __prompt, int endl = 0)
    {
        std::cout << __prompt;
        if (endl == 0){std::cout << std::endl;}else{}
        return;
    }
    // Input (std::string)
    std::string kscanf(std::string __prompt)
    {
        kprintf(__prompt, 1);
        std::getline(std::cin, input);
        return input;
    }
};

// Replacement for DS_IO.kscanf()
// We don't need a replacement for kprintf, just use std::cout
std::string PromptUserForInput(std::string prompt = "$")
{
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    return input;
}