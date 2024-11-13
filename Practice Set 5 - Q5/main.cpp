#include <iostream>
#include<math.h>

using namespace std;

double mean(int, int, int, int, int);
double stDev(int, int, int, int, int, double);

int main()
{
    int x1, x2, x3, x4, x5;
    double m, sd;

    cout<<"Enter five numbers: ";
    cin>>x1>>x2>>x3>>x4>>x5;

    m = mean(x1, x2, x3, x4, x5);
    sd  = stDev(x1, x2, x3, x4, x5, m);

    cout<<"\nMean: "<<m;
    cout<<"\nStandard Deviation: "<<sd;

    return 0;
}

double mean(int x1, int x2, int x3, int x4, int x5)
{
    return ((x1 + x2 + x3 + x4 + x5) / 5.0);
}

double stDev(int x1, int x2, int x3, int x4, int x5, double m)
{
    return (sqrt(pow(x1 - m, 2) + pow(x2 - m, 2) + pow(x3 - m, 2) + pow(x4 - m, 2) + pow(x5 - m, 2)) / 5);
}
