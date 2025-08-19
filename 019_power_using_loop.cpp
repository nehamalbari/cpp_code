#include <iostream>
using namespace std;
int main()
{
    int base,power;
    long long result=1;//initialise result to 1
    
    cout<<"Enter the base number:";
    cin>>base;
    cout<<"Enter the power:";
    cin>>power;
    if(power==0)//handles the special case when power is 0
    {
        result=1;
    }
    else
    {
    for(int i=0;i<power;i++)
    {
        result=result * base;//multipy result by base in each iteration
    }
    }
    cout<<result;
    return 0;
}
