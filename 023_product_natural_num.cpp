#include<iostream>
using namespace std;
int main()
{
    int n;
    long long product=1;//product will store the cumulative product of natural numbers upto a limit
    cout<<"Enter the limit:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         product=product*i;//multiply the current natural number i to the product
    }
    cout<<"The product of "<<n<<" natural numbers are "<<product;
    return 0;
}