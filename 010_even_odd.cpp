#include <iostream> // for input/output
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    if(number % 2 == 0) // check if divisible by 2
    {
        cout << "Even number\n";
    }
    else
    {
        cout << "Odd number\n";
    }
    return 0;
}
