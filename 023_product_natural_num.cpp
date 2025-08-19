#include<iostream>
using namespace std;
int main()
{
    int n,product=0;//sum will store the cumulative sum of natural numbers upto a limit
    cout<<"Enter the limit:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         product=product*i;//add the current natural number i to the sum
    }
    cout<<"The product of "<<n<<" natural numbers are "<<product;
    return 0;
}