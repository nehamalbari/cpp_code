#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the character:";
    cin>>c;
     // This 'if' statement checks if the entered character is an alphabet.
    if((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'))
    {
        cout<<c<<" is an alphabet";//executes when condition is true.
    }
    else
    {
        cout<<c<<" is not an alphabet";//executes when condition is false
    }
    return 0;

}