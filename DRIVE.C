#include<stdio.h>
void main()
{
int age;
clrscr();
printf("enter the age:");
scanf("%d",&age);
if(age>=18)
{
printf("eligible to drive");
}
else
{
printf("not eligible to drive");
}
getch();
}