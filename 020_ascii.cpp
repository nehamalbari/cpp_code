#include<iostream>
using namespace std;
int main()
{
    char my_char;
    cout<<"Enter the character: ";
    cin>>my_char;
     // Converting the character to its integer (ASCII) value using a type cast (int)
    cout<<"The ascii value of the character you entered is : "<<(int)my_char;
    return 0;

}