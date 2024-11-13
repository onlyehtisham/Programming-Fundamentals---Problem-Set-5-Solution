#include <iostream>

using namespace std;

int factorial(int num)
{
    int f = 1;

    for (int i = 1; i <= num; i++)
    {
        f *= i;
    }

    return f;
}

int main()
{
    int num;

    cout<<"Enter any number: ";
    cin>>num;

    cout<<"\nFactorial is: "<<factorial(num);

    return 0;
}
