#include <iostream>
using namespace std;
int main()
{
    float units,total_bill;
    cout<<"Enter units consumed: ";
    cin>>units;
    //0-300 units (₹ 6.40);   
    if(units <= 300)
    {
        total_bill= units * 6.40;
        cout<<"Your electricity bill is "<<total_bill<<" Rs";
    }
    //0-350 units (₹ 7.25);
    else if(units <= 350)
    {
        total_bill= (300 * 6.40) + (units - 300) * 7.25;
        cout<<"Your electricity bill is "<<total_bill<<" Rs";
    }
    //0-400 units (₹ 7.60)
    else if(units <= 400)
    {
        total_bill= (300 * 6.40) + (50 * 7.25) + (units - 350) * 7.60;
        cout<<"Your electricity bill is "<<total_bill<<" Rs";
    }
    //0-500 units (₹ 7.90);
    else if(units <= 500)
    {
        total_bill= (300 * 6.40) + (50 * 7.25) + (50 * 7.60) + (units - 400) * 7.90;
        cout<<"Your electricity bill is "<<total_bill<<" Rs";
    }
    //above 500 units (₹ 8.80)
    else
    {
        total_bill=(300 * 6.40) + (50 * 7.25) + (50 * 7.60) + (100 * 7.90) + (units - 500) * 8.80;
        cout<<"Your electricity bill is "<<total_bill<<" Rs";
    }

    

    //prints total bill
    return 0;

}