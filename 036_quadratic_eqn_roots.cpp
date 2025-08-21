#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //the quadratic eqn is of the form ax^2+bx+c=0
    double a,b,c,discriminant;
    double root1,root2,real_part,imaginary_part;
    cout<<"Enter the values for a,b and c:\n";
    cin>>a>>b>>c;
    discriminant=(b * b) - 4 * a * c;//calculating discriminant
    if(discriminant > 0)
    {
        // Case 1: Two distinct real roots
        root1=(-b + sqrt(discriminant)) / (2 * a); 
        root2=(-b - sqrt(discriminant)) / (2 * a);
        cout<<"The equation has two distinct real roots ";
        cout<<"Root 1 is "<<root1<<" "; 
        cout<<"Root 2 is "<<root2;
    }
    else if(discriminant < 0)
    {
        // Case 2: Two distinct complex (imaginary) roots
        real_part= -b / 2 * a;
        imaginary_part= sqrt(-discriminant) / 2 * a;
        cout<<"The equation has two distinct complex (imaginary) roots ";
        cout<<"Root 1 is "<<real_part<<" + "<<imaginary_part<<"i "; 
        cout<<"Root 2 is "<<real_part<<" - "<<imaginary_part<<"i";
    }
    else
    {
        // Case 3: One real root (also called two equal roots)
        root1 = root2 = -b / 2 * a;
        cout<<"The equation has one real root (also called two equal roots) ";
        cout<<"Root1 = Root2 "<<root1;
    }
    return 0;
}