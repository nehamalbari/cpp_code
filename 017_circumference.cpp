#include <iostream>
using namespace std;
int main()
{
    float radius,PI=3.14;
    double circumference;
    cout<<"Enter the radius: ";//prompt to enter the radius of the circle
    cin>>radius;
    circumference=2 * PI * radius;//calculating circumference of the circle
    cout<<"The Circumference is "<<circumference;// printing the result
    return 0;
}
