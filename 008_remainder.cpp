#include <iostream> // for input/output
using namespace std;
int main()
{
    int num1, num2, remainder;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    remainder = num1 % num2; // find remainder
    cout << remainder << endl; // display remainder
    return 0;
}
