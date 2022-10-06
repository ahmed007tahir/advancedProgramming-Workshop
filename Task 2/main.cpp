#include <iostream>
using namespace std;

void cypher(string text, int flag, int key)
{

    // this value will be added to the ascii value of the char
    int shift = 0;
    int i = 0;
    int newposition = 0;
    bool capital = false;

    if (flag == 0) // encrypt
    {
        shift += key;
    }
    else if (flag == 1) // decrypt
    {
        shift -= key;
    }

    for(char& c : text) // iterate through string
    {
        if (c > 64 && c < 91)  // if ascci value belongs to capital alphabets
        {
            i = int(c) - 64;
            capital = true;
        }

        else if (c > 96 && c < 123) // if ascci value belongs to lower case alphabets
        {
            i = int(c) - 96;
            capital = false;
        }
        newposition = i + shift;
        if (newposition > 26)
        {
            newposition %= 26;
        }
        else if (newposition < 1)
        {
            newposition %= 26;
            newposition += 26;
        }
        if (capital)
        {
            cout << char(newposition + 64);
        }
        else
        {
            cout << char(newposition + 96);
        }
    }
}


int main() {
    cypher("Abc",1,27);
    return 0;
}
