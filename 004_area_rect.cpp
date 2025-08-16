#include <iostream> // for input/output
using namespace std;
int main()
{
    double length, width,area;
    cout<<"Enter the length of rectangle"; //prompt user
    cin>>length;   //read length
    cout<<"Enter the width of rectangle";   //prompt user
    cin>>width;     // read width
    area = length * width; // calculate area
    cout << area << endl; // display result
    return 0;
}
