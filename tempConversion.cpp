#include <iostream>
using namespace std;
int main()
{
    double celsius,fahrenheit;
    cout<<"Enter the temperature in celsius: ";
    cin>>celsius;
    fahrenheit=(9.0 / 5.0 * celsius)+32;
    cout<<"The temperature in Fahrenheit is "<<fahrenheit<<endl;
    return 0;
}