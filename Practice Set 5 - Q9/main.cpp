#include <iostream>

using namespace std;

double calculateBilling(int, int, int);

int main()
{
    int income, consultingTime, hourlyRate;

    cout<<"Enter income: ";
    cin>>income;
    cout<<"Enter consulting time: ";
    cin>>consultingTime;
    cout<<"Enter hourly rate: ";
    cin>>hourlyRate;

    cout<<"\nBilling amount will be: "<<calculateBilling(income, consultingTime, hourlyRate);

    return 0;
}

double calculateBilling(int income, int consultingTime, int hourlyRate)
{
    if (income < 25000)
    {
        if (consultingTime < 30)
            return 0.0;
        else
            return hourlyRate * 0.4 * (consultingTime - 30) / 60;
    } else
    {
        if (consultingTime < 20)
            return 0.0;
        else
            return hourlyRate * 0.7 * (consultingTime - 20) / 60;
    }
}
