#include <iostream>
using namespace std;

// The recursive function to calculate power.
double power(double base, int exponent)
{
    // Any number raised to the power of 0 is 1.
    if(exponent==0)
    {
        return 1;
    }
    
    else if (exponent > 0)
    {
        // Example: 2^3 is the same as 2 * 2^2   
        return base * power(base,exponent-1);
    }
    else
    {
        //Recursive Step for Negative Exponents:
        return 1 / power(base,-exponent);
    }
    
}



int main()
{
    double base;
    int exponent;
    cout<<"Enter the base:";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>exponent;
    // Call the recursive function and store the result.
    double result = power(base,exponent);
    cout<<base<<" raised to the power "<<exponent<<" is "<<result;
    return 0;
    
}