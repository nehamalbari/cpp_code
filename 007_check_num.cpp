#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    if(number<0)
    {
        cout<<"Number is negative";
    }
    else if(number>0)
    {
        cout<<"Number is positive";
    }
    else
    {
        cout<<"Number is zero";
    }
    return 0;

}
