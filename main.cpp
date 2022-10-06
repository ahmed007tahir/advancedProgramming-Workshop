#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void textReader(string fileName){
    string line;
    int countSentences = 0;
    int countWords = 0;
    ifstream myfile (fileName);

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';

            // count number of sentences
            for(char& c : line) // iterate through string
            {
                if (c == '.' || c == '!' || c == '?'){
                    countSentences++;
                }
                if (c == ' ' || c == ',')
                {
                    countWords ++;

                }
            }
        }
        countWords += countSentences;

        cout << "\nThere are " << countSentences << " sentences" << endl;
        cout << "\nThere are " << countWords << " words" << endl;

        myfile.close();
    }
    else cout << "Unable to open file";
}


int main () {

    textReader(R"(C:\Users\ahmed\Desktop\OneDrive - University of Lincoln\Year 2\Advanced Programming\Week 2\Workshop 2\Text\input.txt)");

    return 0;
}
