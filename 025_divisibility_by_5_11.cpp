#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    // Checks if the number is divisible by both 5 AND 11
    if(num % 5 == 0 && num % 11 == 0)
    {
        cout<<num<<" is divisible by 5 and 11 ";
    }
    // Checks if the number is divisible by 5 
    else if(num % 5 == 0)
    {
        cout<<num<<" is divisible by 5";
    }
    // Checks if the number is divisible by 11.

    else if(num % 11 == 0)
    {
        cout<<"Divisible by 11";
    }
    // Executes if none of the above conditions are true.
    else
    {
        cout<<" is not divisible by either 5 or 11 ";
    }
    return 0;

}
