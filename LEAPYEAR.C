#include<stdio.h>
void main()
{
int year;
clrscr();
printf("enter a year");
scanf("%d",&year);
if(year%4==0)
{
printf("it is a leap year");
}
else
{
printf("it is not a leap year");
}
getch();
}