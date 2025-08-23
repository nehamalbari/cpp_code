#include <iostream>
using namespace std;
int main()
{
    int original_num,reversed_num=0,remainder;
    cout<<"Enter the number:";
    cin>>original_num;
    int temp = original_num; //use a temporary variable for calculations
    while(temp != 0)//loop continues until the number becomes 0
    {
        //get the last digits of your number
        remainder = temp % 10;

        // Build the reversed number by shifting and adding the last digit
        reversed_num= (reversed_num * 10) + remainder;
        
        // Remove the last digit from the number
        temp= temp / 10;
    }
    cout<<"Your Original number was "<<original_num<<"\n";
    cout<<"Your reversed number is "<<reversed_num;
    return 0;

}