#include <iostream>
using namespace std;
void printRightAngledTriangle(int rows)
{
    //outer loop for rows
    for(int i=1 ; i <= rows; i++)
    {
        //inner loop for stars
        for(int j=1 ; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}


void pyramid(int rows)
{
    //outer loop
    for(int i=1 ; i <= rows; i++)
    {
        //inner loop for spaces
        for(int j=1 ; j<=rows -i; j++)
        {
            cout<<" ";
        }
        //inner loop for stars
        for(int k=1; k <=2 * i - 1; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    printRightAngledTriangle(rows);

    cout<<"\n\n\n";

    pyramid(rows);
    return 0;

}


