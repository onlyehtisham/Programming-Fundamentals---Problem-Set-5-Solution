#include <iostream>

using namespace std;

int sumNatural(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;

    return sum;
}

int main()
{
    int num;

    cout<<"Enter any number: ";
    cin>>num;

    cout<<"\nNatural sum = "<<sumNatural(num)<<endl;
    return 0;
}
