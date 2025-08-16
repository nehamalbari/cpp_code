#include <iostream> // for input/output
using namespace std;
int main()
{
    int num, cube;
    cout << "Enter the number: ";
    cin >> num;
    cube = num * num * num; // calculate cube
    cout << "Cube of " << num << " is " << cube; // display result
    return 0;
}
