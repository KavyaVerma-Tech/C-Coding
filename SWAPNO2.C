#include<stdio.h>
void main()
{
int a,b;
clrscr();
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("the swapped values of a and b are %d %d",a, b);
getch();
}