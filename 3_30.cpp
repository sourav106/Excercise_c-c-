/*
PROGRAM TO PRINT
    *
    **
    ***
    ****
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int row=0;
    cout<<"Enter number of rows: ";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    getch();
    return 0;
}