#include <iostream> // for input/output
using namespace std;
int main()
{
    int num, square;
    cout << "Enter the number: ";
    cin >> num;
    square = num * num; // calculate square
    cout << "Square of " << num << " is " << square; // display result
    return 0;
}
