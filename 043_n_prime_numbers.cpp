#include <iostream>
using namespace std;
int main()
{
    int limit;
    
    
    cout<<"Enter the limit: ";
    cin>>limit;
    // Outer loop: iterates through each number from 2 up to the specified limit
    for(int i=2; i <= limit ; i++)
    {
        bool isPrime=true;
        for(int j=2 ; j * j <= i; j++)
        {
            // Checks if 'i' is perfectly divisible by 'j'
            if(i % j == 0)
            {
            isPrime = false;
            break;
            }
        }
        if(isPrime)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
    
    
}