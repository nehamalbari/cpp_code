#include <iostream>
using namespace std;
int main()
{
    int num,sum_of_divisors=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1;i<num;i++)//loop from 1 upto the number itself(but the number should not be included)
    {
        if(num % i == 0)//checks the divisors
        {
            sum_of_divisors=sum_of_divisors + i;//adds all the divisors
        }
    }
    if(num == sum_of_divisors)//checks whether number = sum of its divisors
    {
        cout<<num<<" is a perfect number:";//executes if the above condition is true
    }
    else
    {
        cout<<num<<" is not a perfect number";//executes if the above condition is false
    }
    return 0;
}