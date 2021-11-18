// PROGRAM TO PRINT THE PARTICULAR TABLE 
#include<iostream>
#include<conio.h>

using namespace std;
    
int main()
{
    int n;
    cout<<"Enter the Required Table: ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }

    getch();
    return 0;
}