/*
PROGRAM TO PRINT THE BELOW:
    1
    12
    123
    1234
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num;
    cout<<"Enter your Number: ";
    cin>>num;
    for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}

    getch();
    return 0;
}