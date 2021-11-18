// PROGRAM TO FIND WHETHER THE NUMBER IS PALINDROME OR NOT
#include<stdio.h>
#include<conio.h>

int main()
{
    int d,num,rev=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int num1 = num;
    while (num!=0){
        d = num%10;
        rev = rev*10 + d;
        num = num/10;
    }
    if (num1 == rev){
        printf("%d is Palindrome Number",num1);
    }
    else{
        printf("%d is Not a Palindrome Number",num1);
    }
    getch();
    return 0;
}