#include <iostream>
using namespace std;
int main()
{
    int sum_of_digits = 0,number;
    cout<<"Enter the number:";
    cin>>number;
    int digit;
    //loop until the number becomes 0
    while(number != 0)
    {
        //extract the last digit using the modulo operator
        digit = number % 10;
        sum_of_digits = sum_of_digits + digit;
        //remove the last digit by integer division
        number = number / 10;
    }
    cout<<"The sum of the digits are :"<<sum_of_digits;
    return 0;
} 