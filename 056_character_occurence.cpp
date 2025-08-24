#include <iostream>
#include <string>
using namespace std;
int main()
{
    string string_to_check;
    char char_to_search;
    int length,count=0;
    cout<<"Enter the String: ";
    cin>>string_to_check;
    cout<<"Enter the Character to search for: ";
    cin>>char_to_search;
    // Get the length of the string and store it in the 'length' variable
    length=string_to_check.length();
    // Loop through each character of the string from the beginning (index 0) to the end.
    for(int i=0;i<=length-1;i++)
    {
        // Check if the character at the current index 'i' matches the character being searched for.
        if(string_to_check[i] == char_to_search)
        {
            // If there's a match, increment the counter.
            count=count + 1;
        }
    }
    cout<<"The character "<<char_to_search<<" occured "<<count<<" times";
    return 0;


}