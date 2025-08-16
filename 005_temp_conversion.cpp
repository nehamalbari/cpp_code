#include <iostream> // for input/output
using namespace std;
int main()
{
    double celsius, fahrenheit;
    cout << "Enter the temperature in celsius: "; // take input
    cin >> celsius;
    fahrenheit = (9.0 / 5.0 * celsius) + 32; // convert to Fahrenheit
    cout << "The temperature in Fahrenheit is " << fahrenheit << endl; // display result
    return 0;
}
