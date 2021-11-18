/* 
PROGRAM TO FIND THE NUMBER OF AND SUM OF ALL INTEGERS GREATER THAN 10
AND LESS THAN 100 THAT ARE DIVISIBLE BY 7
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num,sum;
    for (int i=10;i<=100;i++)
    {
        if (i%7==0)
        {
            sum += i;
            cout<<i<<"\t";
        }

    }
    cout<<"\n"<<sum;

    getch();
    return 0;
}