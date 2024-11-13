#include <iostream>

using namespace std;

int larger(int x, int y)
{
    if (x >= y)
        return x;
    else
        return y;
}

int main()
{
    int num, mx;

    cout<<"Enter number 1: ";
    cin>>num;
    mx = num;

    for (int i = 1; i <= 9; i++)
    {
        cout<<"Enter number "<< i + 1<<": ";
        cin>>num;
        mx = larger(num, mx);
    }

    cout<<"\n\nMaximum number is: "<<mx;
    return 0;
}
