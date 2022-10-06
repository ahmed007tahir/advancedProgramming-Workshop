//
// Created by ahmed on 06/10/2022.
//
#include <iostream>
#include <fstream>
#include <string>
#include "Analyse.h"

using namespace std;

void textReader(string fileName){
    string line;
    ifstream myfile (fileName);

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";

}