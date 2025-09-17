#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("the swaping value of a and b are %d%d",a,b);
getch();
}