#include <iostream>
using namespace std;
int main()
{
    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    //Handle the initial numbers of the sequence
    if(limit < 0)
    {
        return 0;//no fibonacci numbers to display
    }

    long long a=0;
    long long b=1;

    cout<<"Fibonacci sequence up to "<<limit<<": \n";
    cout<<a<<" ";//always print the first number
    //print the second number if the limit allows
    if(limit >= 1)
    {
        cout<<b<<" ";
    }
    //calculate and print subsequent numbers
    long long c= a + b;
    while(c <= limit)
    {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
    } 
    return 0;



}