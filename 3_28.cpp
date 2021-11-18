/* PROGRAM TO PRINT DATA: 
		1
		21
		321
		4321
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	for (int row=1;row<=num;row++)
	{
		for (int col=row;col>=1;col--)
		{
			cout<<col;
		}
		cout<<endl;
	}
	//getch();
	return 0;
	
}