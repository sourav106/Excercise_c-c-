// PROGRAM TO PRINT MULTIPLE STARS
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of lines: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)cout<<" ";
        for(int j=1;j<=2*i-1;j++)cout<<"*";
        cout<<endl;
    }

    getch();
    return 0;
}