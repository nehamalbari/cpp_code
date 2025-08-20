#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the character:";
    cin>>c;
     // This 'if' statement checks if the entered character is an alphabet.
    if(c >= '0' && c<= '9')
    {
        cout<<c<<" is a number";//executes when condition is true
    }
    else
    {
        cout<<c<<" is not a number";//executes when condition is false
    }
    return 0;

}