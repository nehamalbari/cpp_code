#include <iostream>
using namespace std;
int main()
{
    int limit,sum=0;
    cout<<"Enter the limit: ";
    cin>>limit;
    // Start a for loop to iterate through numbers from 0 up to the user-defined limit
    for(int i=0; i<=limit; i++)
    {
        // If 'i' is not divisible by 2 , it is odd.
        if(i % 2 != 0)
        {
            // If the number is odd, add it to the 'sum' variable.
            sum= sum + i;
        }
    }
    cout<<"The sum of even numbers upto "<<limit<<" is "<<sum;
    return 0;
}