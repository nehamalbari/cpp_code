#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the character:";//Prompt to enter the character
    cin>>c;//storing the character in variable c
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')//if condition to check whether the character is vowel
    {
        cout<<c<<" is a vowel";//executed when the above condition is true
    }
    else
    {
        cout<<c<<" is a consonant";//executed when the above condition is false
    }
    return 0;
}