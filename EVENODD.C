#include<stdio.h>
void main()
{
int num;
clrscr();
printf("enter any number");
scanf("%d",&num);
if(num%2==0)
{
printf("number is even");
}
else
{
printf("number is odd");
}
getch();
}