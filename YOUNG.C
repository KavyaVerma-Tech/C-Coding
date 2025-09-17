#include<stdio.h>
void main()
{
int x,y,z;
clrscr();
printf("enter the age of x:");
scanf("%d",&x);
printf("enter the age of y:");
scanf("%d",&y);
printf("enter the age of z:");
scanf("%d",&z);
if(x<y && y<z)
{
printf("x is the youngest");
}
else if(y<z && z<x)
{
printf("y is the youngest");
}
else
{
printf("z is the youngest");
}
getch();
}