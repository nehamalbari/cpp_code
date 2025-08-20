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
    //executes when the above condition becomes false
    else
    {
        cout<<num<<" is not divisible by 5 and 11 ";
    }
    return 0;

}
