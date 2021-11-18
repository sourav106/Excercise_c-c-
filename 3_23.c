// PROGRAM TO CHECK WHETHER THE NUMBER IS ARMSTRONG OR NOT
#include<stdio.h>
#include<conio.h>

int main()
{
    int num,d,temp,arm=0;
    printf("Enter your Number: ");
    scanf("%d",&num);
    temp = num;
    while (temp!=0){
        d = temp%10;
        arm += d*d*d;
        temp = temp/10;
    }
    
    if (arm==num){printf("%d is Armstrong Number",num);}
    else{printf("%d is Not an Armstrong Number",num);}

    getch();
    return 0;
}