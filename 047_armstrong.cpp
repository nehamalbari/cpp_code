#include <iostream>
using namespace std;
int main()
{
    int num,last_digit;
    long sum_of_cubes=0,cube;
    bool isArmstrong= false;
    cout<<"Enter the number: ";
    cin>>num;
    int temp_num=num; // Store the original number in a temporary variable
    // Loop until all digits have been processed
    while(temp_num != 0)
    {
        last_digit= temp_num % 10;//get the last digit of your number
        cube= last_digit * last_digit * last_digit;//calculating cube of digits
        sum_of_cubes= sum_of_cubes + cube;//adding the cubes
        temp_num=temp_num / 10;//removing the last digit of the number
    }
    
    
    // Compare the original number with the sum of cubes
    if(num == sum_of_cubes)
    {
        cout<<num<<" is an armstrong number";
    }
    else
    {
        cout<<num<<" is not an armstrong number";
    }
    return 0;


}