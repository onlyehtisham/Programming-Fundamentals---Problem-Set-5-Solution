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
    char ch, reply;
    int cnt = 0;

    do
    {
        cout<<"Enter any character: ";
        cin>>ch;

        if (isVowel(ch))
            cnt++;

        cout<<"Do you want to enter another [y/n]: ";
        cin>>reply;
    }
    while (reply == 'y');

    cout<<"\nYou enter "<<cnt<<" vowels";
    return 0;
}
