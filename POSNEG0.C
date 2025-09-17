#include<stdio.h>
void main()
{
int num;
clrscr();
printf("enter any number");
scanf("%d",&num);
if(num>0)
{
printf("number is positive");
}
else if(num<0)
{
printf("number is negative");
}
else
{
printf("number is zero");
}
getch();
}