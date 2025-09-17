#include<stdio.h>
void main()
{
int age;
clrscr();
printf("enter the age");
scanf("%d",&age);
if(age<18)
{
printf("not eligible to vote");
}
else
{
printf("eligible to vote");
}
getch();
}