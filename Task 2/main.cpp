#include <iostream>
using namespace std;

string cypher(string text, int function, int key)
{
    if (function == 0) // encrypt
    {
        for(char& c : text) {
            if (c < 123 && c > 96){
                int newValue = int(c) + key;
                cout << (char)newValue;
            }
            else
            {
                cout << c;
            }
        }
    }
//    else if (function == 1) // decrypt
//    {
//
//    }
    return text;
}


int main() {
    cypher("Hello World!",0,3);
    return 0;
}
