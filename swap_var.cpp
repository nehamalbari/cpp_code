#include <iostream>
using namespace std;
int main()
{
    string first_name,last_name,temp;
    cout<<"Enter your first name: ";
    cin>>first_name;
    cout<<"Enter your last name: ";
    cin>>last_name;
    temp=first_name;
    first_name=last_name;
    last_name=temp;
    cout<<"Your firstname is "<<first_name<<"\n";
    cout<<"Your lastname is "<<last_name<<"\n";
    return 0;

}