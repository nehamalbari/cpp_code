#include <iostream> // for input/output
using namespace std;
int main()
{
    float num1, num2, num3;
    double avg;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    avg = (num1 + num2 + num3) / 3.0; // calculate average
    cout << "Average = " << avg; // display result
    return 0;
}
