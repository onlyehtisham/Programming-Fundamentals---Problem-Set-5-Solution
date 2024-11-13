#include <iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>

using namespace std;

double calculateCharges(double hrs)
{
    double charges;

    if (hrs <= 3)
        charges = 2.0;
    else
        charges = 2.0 + (ceil(hrs - 3.0) * 0.5);

    if (charges > 10.0)
        charges = 10.0;

    return charges;
}

int main()
{
    double h1, h2, h3, totalHrs;
    double c1, c2, c3, totalCharges;

    cout<<"Enter parking time for three customers: ";
    cin>>h1>>h2>>h3;
    c1 = calculateCharges(h1);
    c2 = calculateCharges(h2);
    c3 = calculateCharges(h3);

    totalHrs = h1 + h2 + h3;
    totalCharges = c1 + c2 + c3;

    cout<<fixed<<setprecision(2);
    cout<<setw(15)<<"Car"<<setw(15)<<"Hours"<<setw(15)<<"Charges"<<endl;
    cout<<setw(15)<<"1"<<setw(15)<<h1<<setw(15)<<c1<<endl;
    cout<<setw(15)<<"2"<<setw(15)<<h2<<setw(15)<<c2<<endl;
    cout<<setw(15)<<"3"<<setw(15)<<h3<<setw(15)<<c3<<endl;
    cout<<setw(15)<<"TOTAL"<<setw(15)<<totalHrs<<setw(15)<<totalCharges<<endl;

    return 0;
}
