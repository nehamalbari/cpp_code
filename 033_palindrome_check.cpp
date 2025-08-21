#include <iostream>
using namespace std;
int main()
{
    string word;
    bool isPalindrome=true;//flag variable
    cout<<"Enter a String: ";
    cin>>word;
    int length = word.length();//calculating length of the string using length()
    int start=0;
    int end=length-1;
    // The while loop iterates as long as the start pointer is less than the end pointer.
    while(start<end)  

    {
        // Compare the characters at the start and end of the string.

        if(word[start] != word[end])
        {
            // If they don't match, set the flag to false and break the loop.
            isPalindrome = false;
            break;
        }
        // If they match, move the pointers inward for the next comparison.

        start++;
        end--;
    }
    
    // After the loop, check the value of the boolean flag to determine the result.

    if(isPalindrome)
    {
        cout<<"The string is a Palindrome";//executes when the flag variable is true
    }
    else
    {
        cout<<"The string is not a Palindrome";//executes when the flag variable is false
    }
    return 0;
}