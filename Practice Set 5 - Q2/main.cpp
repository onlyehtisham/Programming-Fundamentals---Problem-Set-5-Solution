#include <iostream>

using namespace std;

bool isVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        return true;
    default:
        return false;
    }
}

int main()
{
    char ch;

    cout<<"Enter any character: ";
    cin>>ch;

    if (isVowel(ch))
        cout<<"This is vowel";
    else
        cout<<"This is consonent";
    return 0;
}
