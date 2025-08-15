#include <iostream> // for input/output
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if(num1 > num2) // compare numbers
    {
        cout << num1 << " largest";
    }
    else
    {
        cout << num2 << " largest";
    }
    return 0;
}
