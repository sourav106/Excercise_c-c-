/*
PROGRAM TO PRINT (DOWNWARDS STARS)
    ****
    ***
    **
    *
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int row;
    cout<<"Enter number of Lines: ";
    cin>>row;
    for(int i=row;i>=1;i--)
    {
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    getch();
    return 0;
}