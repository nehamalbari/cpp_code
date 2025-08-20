#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;
    if((num1>num2) && (num1>num3))// Check if num1 is the greatest
    {
        cout<<num1<<" is greatest ";
    }
    else if((num2 > num1) && (num2 > num3))// Otherwise, check if num2 is the greatest
    {
        cout<<num2<<" is greatest ";
    }
    else// If neither of the above, num3 must be the greatest
    {
        cout<<num3<<" is greatest ";
    }
    return 0;

}