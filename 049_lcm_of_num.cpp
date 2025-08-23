#include <iostream>
using namespace std;
int main()
{
    long num1,num2;
    int remainder;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    //creating temporary variables for calculations
    int temp1=num1;
    int temp2=num2;

    // This is the Euclidean Algorithm.
    // The loop continues as long as the second number (temp2) is not zero.    
    while(temp2 != 0)
    {
        remainder= temp1 % temp2;
        temp1 = temp2;
        temp2 = remainder;
    }
    int gcd = temp1;

    long lcm= (num1 * num2) / gcd;  // formula to calculate lcm with gcd
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm;
    return 0;
}