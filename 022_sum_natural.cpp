#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;//sum will store the cumulative sum of natural numbers upto a limit
    cout<<"Enter the limit:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         sum=sum+i;//add the current natural number i to the sum
    }
    cout<<"The sum of "<<n<<" natural numbers are "<<sum;
    return 0;
}
