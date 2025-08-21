#include <iostream>
using namespace std;
int main()
{
    int side_1,side_2,side_3;
    cout<<"Enter side 1: ";
    cin>>side_1;
    cout<<"Enter side 2: ";
    cin>>side_2;
    cout<<"Enter side 3: ";
    cin>>side_3;
    // Check for equilateral triangle
    if((side_1 == side_2) && (side_2==side_3))
    {
        cout<<"The triangle is equilateral";
    }
    // Check for isosceles triangle
    else if((side_1==side_2) || (side_1==side_3) || (side_2==side_3))
    {
        cout<<"The triangle is isosceles";
    }
    // If neither of the above, it must be a scalene triangle
    else
    {
        cout<<"The triangle is scalene";
    }
    return 0;
}