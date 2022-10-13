#include <iostream>
#include <string>
#include <vector>

#include "WordFrequencyPair.h"
#include "Reader.h"

int main () {

    // calling the text reader fucntion from the Reader Class and storing output into a string variable 'text'
    std::string text = Reader::TextReader(R"(C:\Users\ahmed\Desktop\OneDrive - University of Lincoln\Year 2\Advanced Programming\Week 2\Workshop 2\Text\input.txt)");

    // calling the static method 'Numberofsentences' on 'text' and storing output into an integer variable 'sentences'
    int sentences = WordFrequencyPair::NumberOfSentences(text);
    std::cout << "Number of Sentences: " << sentences << std::endl;

    // calling the static method 'NumberofWords' on 'text' and storing output into an integer variable 'words'
    int words = WordFrequencyPair::NumberofWords(text);
    std::cout << "Number of Words: " << words << std::endl;

    // Creating a vector of type 'WordFrequencyPair'
    std::vector<WordFrequencyPair> test = WordFrequencyPair::ListFrequencyPairs(text);

    std::cout << "\nWord Frequency Pairs:\n" << std::endl;

    // iterating through the vector, for each, WordFrequencyPair object, running the 'getWord()' and 'getNumber()' method.
    for (auto i = test.begin(); i != test.end(); ++i) {
        std::cout <<  i->getWord() << "\t" << i->getFrequency() << std::endl;

    }

    return 0;
}
