//
// Created by ahmed on 10/10/2022.
//
#include <iostream>
#include <fstream>
#include "Reader.h"

// this method reads a text file and returns the contents of the file as a string
std::string Reader::TextReader(const std::string &fileName) {

    // this varible will hold each line of the file as the file is read line by line
    std::string line;

    // this variable will hold the contents of the whole file
    std::string text;

    // creating an ifsteam object
    std::ifstream myFile (fileName);

    // opening the file
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            // concatinating each line of the file to the string variable text
            text += line;
            text += "\n";
        }
        // closing the file
        myFile.close();
    }
    // error message in case the file could not be open by the 'file.is_open()' method
    else std::cout << "Unable to open file";

    std::cout << text << std::endl;

    return text;
}
