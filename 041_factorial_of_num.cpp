#include <iostream>
using namespace std;
int main()
{
    int num;
    long long factorial=1;// 'long long' is used to prevent integer overflow for larger numbers,
    cout<<"Enter the number: ";
    cin>>num;
    // Check if the number is negative.
    // The factorial function is not defined for negative integers
    if(num < 0)
    {
        cout<<"Factorial is not defined for negative numbers: ";
    }
    // If the number is non-negative, proceed with the calculation.
    else
    {
        // Loop from 1 up to the number entered by the user.
        // In each iteration, the current factorial value is multiplied
        // by the loop counter 'i'.
        for(int i=1;i<=num;i++)
        {
            factorial *= i;
        }
        cout<<"Factorial of "<<num<<" is "<<factorial;
    }
    return 0;
}