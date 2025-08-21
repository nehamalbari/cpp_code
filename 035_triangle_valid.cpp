#include <iostream>
using namespace std;
int main()
{
    float angle_1,angle_2,angle_3,sum_of_angles;

    // Prompt the user to enter the three angles.
    cout<<"Enter three angles of the triangle: \n";

    // Read the three angles from the user's input.
    cin>>angle_1>>angle_2>>angle_3;

    // Calculate the sum of the three angles.
    sum_of_angles=angle_1 + angle_2 + angle_3;

    // A triangle is valid if:
    // 1. All angles are greater than 0.
    // 2. The sum of the angles is exactly 180 degrees.
    if(angle_1 > 0 && angle_2 > 0 && angle_3 > 0 && sum_of_angles == 180)
    {
        cout<<"This is a valid triangle";//executes when the above condition is true
    }
    else
    {
        cout<<"This is not valid triangle";//executes when the above condition is false
    }
    return 0;
}