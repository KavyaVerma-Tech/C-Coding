#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the vale of a");
scanf("%d",&a);
printf("enter the vale of b");
scanf("%d",&b);
c=a&b;
printf("the bitwise and of a and b is = %d",c);
getch();
}