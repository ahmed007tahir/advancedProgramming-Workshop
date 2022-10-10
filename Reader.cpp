//
// Created by ahmed on 10/10/2022.
//
#include <iostream>
#include <fstream>
#include "Reader.h"


std::string Reader::TextReader(const std::string &fileName) {

    std::string line;
    std::string text;

    std::ifstream myFile (fileName);

    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            text += line;
            text += "\n";
        }
        myFile.close();
    }
    else std::cout << "Unable to open file";

    std::cout << text << std::endl;

    return text;
}
