#include<stdio.h>
#include<conio.h>

int main()
{
    int d,num,rev=0;
    printf("Enter your Number: ");
    scanf("%d",&num);
    int num1 = num;
    while (num!=0)
    {
        d = num%10;
        rev = rev*10 + d;
        num = num/10;
    }
    printf("Reverse of %d ==> %d",num1,rev);
    

    getch();
    return 0;
}