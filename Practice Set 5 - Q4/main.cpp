#include <iostream>

using namespace std;

int reverseDigit(int n)
{
    int reversed = 0, digit;

    while ( n != 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return reversed;
}

int main()
{
    int num;

    cout<<"Enter any number: ";
    cin>>num;

    cout<<"Reversed number: "<<reverseDigit(num);

    return 0;
}
