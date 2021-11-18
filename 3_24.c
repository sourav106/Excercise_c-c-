//PROGRAM TO CALCULATE THE FACTORIAL OF GIVEN NUMBER
#include<stdio.h>
#include<conio.h>

int main()
{
    int fact=1,num;
    printf("Enter your Number: ");
    scanf("%d",&num);

    for(int i=2;i<=num;i++){
        fact = fact*i;
    }
    printf("%d! = %d",num,fact);
    getch();
    return 0;
}