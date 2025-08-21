#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter a number (1-7): ";
    cin>>day;
    switch (day)//switch-statement is used to perform the comparisons
    {
        //if day = 1 , this case is executed
    case 1:
        cout<<"Day is Monday";
        break;
        //if day = 1 , this case is executed
    case 2:           
        cout<<"Day is Tuesday";
        break;
        //if day = 1 , this case is executed
    case 3:               
        cout<<"Day is Wednesday";
        break;
        //if day = 1 , this case is executed
    case 4:
        cout<<"Day is Thursday";
        break;
        //if day = 1 , this case is executed
    case 5:
        cout<<"Day is Friday";
        break;
        //if day = 1 , this case is executed
    case 6:
        cout<<"Day is Saturday";
        break;
        //if day = 1 , this case is executed
    case 7:
        cout<<"Day is Sunday";
        break;
        // The 'default' case is executed if none of the 'case' labels match the value of 'day'.

    
    default:
        cout<<"Invalid Choice";
        break;
    }
    return 0;
}