// PROGRAM TO FIND OUT GREATEST NUMBER WITH CONDITIONAL OPERATOR ? :
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,big;

    printf("Enter value of a, b, c:  ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    big = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Largest Number is : %d",big);

    getch();
    return 0;
}