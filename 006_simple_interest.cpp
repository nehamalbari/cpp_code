#include <iostream>
using namespace std;
int main()
{
    double principal,roi,time,si;
    cout<<"Enter the amount: ";
    cin>>principal;
    cout<<"Enter annual interest rate: ";
    cin>>roi;
    cout<<"Enter the time period (in years): ";
    cin>>time;
    si=(principal * roi * time) / 100;
    cout<<"Simple Interest = "<<si<<endl;
    return 0;

}
