#include <iostream> // for input/output
using namespace std;
int main()
{
    string first_name, last_name, temp;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    temp = first_name; // store first name temporarily
    first_name = last_name; // swap values
    last_name = temp;
    cout << "Your firstname is " << first_name << "\n"; // display swapped first name
    cout << "Your lastname is " << last_name << "\n"; // display swapped last name
    return 0;
}

