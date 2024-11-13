#include <iostream>

using namespace std;

int power(int a, int b)
{
    int p = 1;

    for (int i = 1; i <= b; i++)
        p = p * a;

    return p;
}

int main()
{
    int n1, n2;

    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<"\n"<<n1<<" raised to power "<<n2<<" = "<<power(n1, n2)<<endl;
    return 0;
}
