//
// Created by ahmed on 10/10/2022.
//
#include <string>
#include <iostream>
#include <vector>
#include "WordFrequencyPair.h"


int WordFrequencyPair::NumberOfSentences(const std::string& text) {

    int countSentences = 0;

    // count number of sentences
    for(char c : text) // iterate through string
    {
        // looks for punctuation marking end of sentence
        if (c == '.' || c == '!' || c == '?')
        {
            countSentences++;
        }
    }
    return countSentences;
}


std::vector<WordFrequencyPair> WordFrequencyPair::ListFrequencyPairs(const std::string& text){

    int startIndexPointer = 0;
    int endIndexPointer = 0;
    int n = 0;

    std::vector<WordFrequencyPair> hello;

    for(int i = 0; i < text.length(); i++){
        char x = text[i];
        if (x == ' ' || x == ',' || x ==  '\n' || x ==  '!' || x ==  '.' || x ==  ':' || x ==  ';' || x ==  '?') {
            endIndexPointer = i;
            n = endIndexPointer - startIndexPointer;
            std::cout << (text.substr(startIndexPointer, n)) << std::endl;
            startIndexPointer = endIndexPointer + 1;
        }

        // now i have the beginning and end index of the first word that needs to be added to the vector.
    }
    return hello;
}
