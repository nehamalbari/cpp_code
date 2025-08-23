#include <iostream>
using namespace std;
int main()
{
    int num1,num2,remainder;
    cout<<"Enter 2 numbers:";
    cin>>num1>>num2;

    // Create temporary copies of the original numbers.
    int temp1=num1;
    int temp2=num2;

    // The Euclidean Algorithm: a while loop to find the GCD.
    // The loop continues as long as the second temporary number (temp2) is not zero.
    while(temp2 != 0)
    {

        // Step 1: Calculate the remainder of the division.
        remainder = temp1 % temp2;

        // Step 2: Update the temporary variables.
        temp1 = temp2;
        temp2 = remainder;
    }
    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<temp1;
    return 0;
}