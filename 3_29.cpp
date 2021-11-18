/* PROGRAM TO PRINT :
	1
	22
	333
	4444
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}