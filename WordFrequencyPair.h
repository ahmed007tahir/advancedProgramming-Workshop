//
// Created by ahmed on 10/10/2022.
//

#ifndef WORKSHOP_2_WORDFREQUENCYPAIR_H
#define WORKSHOP_2_WORDFREQUENCYPAIR_H


class WordFrequencyPair {
private:
    std::string _word;
    int _frequency = 1;

public:
    std::string getWord() {return _word;}
    int getFrequency() {return _frequency;}
    void addFrequency() {_frequency++;}

    static int NumberOfSentences(const std::string& text);
    static int NumberofWords(const std::string& text);
    static std::vector<WordFrequencyPair> ListFrequencyPairs(const std::string& text);

    // constructor
    WordFrequencyPair(std::string word);

};


#endif //WORKSHOP_2_WORDFREQUENCYPAIR_H
