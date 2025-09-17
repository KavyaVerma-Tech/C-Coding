#include<stdio.h>
void main()
{
int num,absvalue;
clrscr();
printf("enter a number:");
scanf("%d",&num);
absvalue = abs(num);
printf("absolute value = %d",absvalue);
getch();
}