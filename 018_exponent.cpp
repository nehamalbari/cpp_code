#include <iostream>
#include <cmath>//used to get access to one of the math function pow()
using namespace std;
int main()
{
    int number,power;
    long result;
    cout<<"Enter the number:\n";//prompt to enter the number
    cin>>number;
    cout<<"Enter the power:\n";//prompt to enter the power
    cin>>power;
    result=pow(number,power);//calculating result using pow function
    cout<<number <<" raised to "<<power<<" = "<<result;
    return 0;


}