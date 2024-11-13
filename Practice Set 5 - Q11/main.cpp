#include <iostream>
#include<math.h>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int product(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

int divide(int a, int b)
{
    return a / b;
}

int power(int a, int b)
{
    return pow(a, b);
}


int main()
{
    int n1, n2;
    char op;

    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter operator [ *, / , + , - , ^ ]: ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>n2;

    switch(op)
    {
    case '*':
        cout<<"Product = "<<product(n1, n2);
        break;
    case '/':
        cout<<"Division = "<<divide(n1, n2);
        break;
    case '+':
        cout<<"Sum = "<<sum(n1, n2);
        break;
    case '-':
        cout<<"Subtration = "<<subtract(n1, n2);
        break;
    case '^':
        cout<<"Power = "<<power(n1, n2);
        break;
    }
    return 0;
}
