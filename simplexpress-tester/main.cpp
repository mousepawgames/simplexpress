#include <iostream>
#include <string>
#include <uchar.h>
#include <vector>

#include "simplexpress/utf_tools.hpp"
#include "simplexpress/simplex.hpp"
#include "simplexpress/rules.hpp"

#include <unicode/unistr.h>
#include <unicode/stringpiece.h>


//REMEMBER TO SET COMPILER: --cflags --libs icu-uc icu-io

using std::vector;
using std::string;

/**change unit class to be named `Simplex`*/
using simplexpress::Simplex;

int main()
{

    std::cout << "SIMPLEXpress v0.2\n"
              << "Copyright (C) 2015 MousePaw Media. All Rights Reserved.\n"
              << "'#exit' or #EXIT to quit.\n"
              << "-----\n" << std::endl;
    string input, model;
    do{
        std::cout << "Please enter a model: ";
        getline(std::cin, model);
        if(model == "#exit" || model == "#EXIT")
            break;
        std::cout << "Enter what you want checked against model: ";
        getline(std::cin, input);

        Simplex simplex(model, input);
    }while(model!="#exit"||model!="#EXIT");
}