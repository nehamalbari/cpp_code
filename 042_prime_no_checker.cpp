#include <iostream>
using namespace std;
int main()
{
    int number;
    // Declares a boolean variable to track if the number is prime.
    bool isPrime = true;
    cout<<"Enter the number: ";
    cin>>number;
    //any number less than or equal to 1 is not prime.
    if(number <= 1 )
    {
        isPrime = false;
    }
    else
    {
        for(int i= 2; i * i <= number; i ++)
        {
            if(number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime)
    {
        cout<<number<<" is a prime number";
    }
    else
    {
        cout<<number<<" is not a prime number";
    }
    return 0;
}