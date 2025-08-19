#include <iostream>
using namespace std;
int main()
{
    float radius,PI=3.14;
    double circumference;
    cout<<"Enter the radius: ";
    cin>>radius;
    circumference=2 * PI * radius;
    cout<<"The Circumference is "<<circumference;
    return 0;
}