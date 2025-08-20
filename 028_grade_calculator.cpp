#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"O grade";
    }
    else if(marks>=80)
    {
        cout<<"A grade";
    }
    else if(marks>=70)
    {
        cout<<"B grade";
    }
    else if(marks>=60)
    {
        cout<<"C grade";
    }
    else if(marks>=50)
    {
        cout<<"D grade";
    }
    else if(marks>=40)
    {
        cout<<"E grade";
    }
    else 
    {
        cout<<"Fail";
    }
    return 0;

}