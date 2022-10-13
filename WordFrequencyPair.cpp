//
// Created by ahmed on 10/10/2022.
//
#include <string>
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

// this method returns a vector of type WordFrequencyPair
std::vector<WordFrequencyPair> WordFrequencyPair::ListFrequencyPairs(const std::string& text){

    // integer variables acting as staring and ending point of each word within the string
    int startIndexPointer = 0, endIndexPointer = 0, n = 0;
    // this flag variable will let up know if the work was already found previously within the text
    bool flag = false;

    std::vector<WordFrequencyPair> hello;

    for(int i = 0; i < text.length(); i++){
        char x = text[i];

        // searching for delimiters that mark the beginning and end of a word within a string
        if (x == ' ' || x == ',' || x ==  '\n' || x ==  '!' || x ==  '.' || x ==  ':' || x ==  ';' || x ==  '?') {

            endIndexPointer = i;
            n = endIndexPointer - startIndexPointer;

            std::string word = text.substr(startIndexPointer, n);
            if (!word.empty()) {

                for (auto i = hello.begin(); i != hello.end(); i++) {
                    if (i->getWord() == word) {
                        i->addFrequency();
                        flag = true;
                    }
                }

                if (!flag){
                    hello.emplace_back(word);
                }


                startIndexPointer = endIndexPointer + 1;

                flag = false;
            }
        }

    }
    return hello;
}

// constructor
WordFrequencyPair::WordFrequencyPair(std::string word) {
    _word = word;
}


int WordFrequencyPair::NumberofWords(const std::string &text) {

    int numberOfWords = 0;

    // for every new line, the number of words in a sentence is equal to the number of spaces in the sentence + 1
    for ( auto x : text){
        if ( x == ' ' || x == '\n')
        {
            numberOfWords ++;
        }
    }
    return numberOfWords;
}
