#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    // If marks are 90 or greater, assign an 'O grade'.
    if(marks>=90)
    {
        cout<<"O grade";
    }
    //Otherwise If marks are 80 or greater, assign an 'A grade'.
    else if(marks>=80)
    {
        cout<<"A grade";
    }
    //Otherwise If marks are 70 or greater, assign an 'B grade'.
    else if(marks>=70)
    {
        cout<<"B grade";
    }
    //Otherwise If marks are 60 or greater, assign an 'C grade'.
    else if(marks>=60)
    {
        cout<<"C grade";
    }
    //Otherwise If marks are 50 or greater, assign an 'D grade'.
    else if(marks>=50)
    {
        cout<<"D grade";
    }
    //Otherwise If marks are 40 or greater, assign an 'E grade'.
    else if(marks>=40)
    {
        cout<<"E grade";
    }
     // If none of the above conditions are met, the marks are less than 40, so the student 'Fails'.
    else 
    {
        cout<<"Fail";
    }
    return 0;

}