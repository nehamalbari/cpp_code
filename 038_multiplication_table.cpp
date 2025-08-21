#include <iostream>
using namespace std;
int main()
{
    long number,product;
    cout<<"Enter the number: ";
    cin>>number;
    // Start a for loop that iterates from 1 to 10.
    // 'i' represents the current multiplier in the table.
    for(int i=1;i<=10;i++)
    {
        product = i * number;// Calculate the product of the user's number and the current multiplier 'i'.

        cout<<number<<" x "<<i<<" = "<<product<<"\n"; // Print the multiplication equation in a clear format.
    }
    return 0;
}