#include <iostream>
#include <string>
#include <vector>

#include "WordFrequencyPair.h"
#include "Reader.h"

int main () {

    std::string text = Reader::TextReader(R"(C:\Users\ahmed\Desktop\OneDrive - University of Lincoln\Year 2\Advanced Programming\Week 2\Workshop 2\Text\input.txt)");
    int sentences = WordFrequencyPair::NumberOfSentences(text);
    std::cout << "Number of Sentences: " << sentences << std::endl;

    WordFrequencyPair::ListFrequencyPairs(text);

    return 0;
}
