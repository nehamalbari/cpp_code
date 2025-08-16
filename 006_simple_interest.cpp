#include <iostream> // for input/output
using namespace std;
int main()
{
    double principal, roi, time, si;
    cout << "Enter the amount: ";
    cin >> principal;
    cout << "Enter annual interest rate: ";
    cin >> roi;
    cout << "Enter the time period (in years): ";
    cin >> time;
    si = (principal * roi * time) / 100; // calculate simple interest
    cout << "Simple Interest = " << si << endl; // display result
    return 0;
}
