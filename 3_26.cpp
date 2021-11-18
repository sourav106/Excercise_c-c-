// PROGRAM TO SUM THE DIGITS OF NUMBER.

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int d,num,sum=0;
    
    cout<<"Enter a number: ";
    cin>>num;
    
    int temp=num;
    while (temp!=0){
        d = temp%10;
        temp = temp/10;
        sum += d;
    }
    cout<<"Sum of Digits of "<<num<<" is: "<<sum;
    
    getch();
    return 0;
}