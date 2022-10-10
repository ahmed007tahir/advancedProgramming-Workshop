//
// Created by ahmed on 10/10/2022.
//

#ifndef WORKSHOP_2_WORDFREQUENCYPAIR_H
#define WORKSHOP_2_WORDFREQUENCYPAIR_H


class WordFrequencyPair {
private:

public:
    static int NumberOfSentences(const std::string& text);
    static std::vector<WordFrequencyPair> ListFrequencyPairs(const std::string& text);
    std::string word;
    int frequency;
};


#endif //WORKSHOP_2_WORDFREQUENCYPAIR_H
