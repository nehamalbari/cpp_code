#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    // The condition checks if the year is divisible by 400, OR if it's divisible by 4 AND NOT divisible by 100.
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout<<year<<" is a leap year ";//executed when the condition is true
    }
    else
    {
        cout<<year<<" is not a leap year ";//executed when the condition is false
    }
    return 0;
}