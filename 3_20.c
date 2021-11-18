// PROGRAM TO FIND THE AREA OF TRIANGLE BY USING THE HERON'S FORMULAWITH ALL CHECKS
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(void){
    float a, b, c, s, area;
    back:
    printf("Enter the sides: (a  b & c) ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if ( ( (a+b)<c ) | ( (b+c)<a ) | ( (c+a)<b ) ){
        printf("Sum of Two sides of Triangle is always Greater than Third Side.\n");
        goto back;
    }
    if (a==0 | b==0 | c==0) {
        printf("Value of any Side cannot be ZERO\n");
        goto back;
    }

    s = (a+b+c)/2;
    
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("Area is ==> %f sq. units",area);
    getch();
}