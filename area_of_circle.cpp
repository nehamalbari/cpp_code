#include <iostream>
using namespace std;
int main()
{
    float PI=3.14,radius;
    double area;
    cout<<"Enter the radius: ";//prompt user
    cin>>radius;// accept the input
    area=PI * radius * radius;//calcualte area pf the circle
    cout<<"Area of the circle is "<<area;//display area
    return 0;

}