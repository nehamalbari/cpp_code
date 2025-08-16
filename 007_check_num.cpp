#include <iostream> // for input/output
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    if(number < 0) // check if negative
    {
        cout << "Number is negative";
    }
    else if(number > 0) // check if positive
    {
        cout << "Number is positive";
    }
    else // otherwise zero
    {
        cout << "Number is zero";
    }
    return 0;
}

