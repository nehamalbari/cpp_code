#include <iostream>
#include <string>
using namespace std;
int main()
{
    string original_str,reversed_str;
    cout<<"Enter the string: ";
    cin>>original_str;
    int length_original_str=original_str.length();
    // It iterates backward from the end of the original string to the beginning.
    for(int i=length_original_str-1; i>=0 ; i--)
    {
        // In each iteration, it takes the character at the current position 'i'
        // from 'original_str' and adds it to the end of 'reversed_str'.
        reversed_str = reversed_str + original_str[i];
    }
    cout<<"The reversed string is: "<<reversed_str;
    return 0;

    

}