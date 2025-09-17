#include<stdio.h>
void main()
{
int choice,a,b,c,p,r,t,x,avg,si;
clrscr();
printf("enter your choice:1,2,or3");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the value of a, b, and c");
scanf("%d %d %d",&a, &b, &c);
avg=(a+b+c)/3;
printf("average of three numbers a, b, and c are %d",avg);
break;
case 2:
printf("enter the principal, rate and time of interest");
scanf("%d %d %d",&p, &r, &t);
si=(p*r*t)/100;
printf("the simple interest is %d",si);
break;
case 3:
printf("enter any number");
scanf("%d",&x);
if(x%2==0)
{
printf("number is even");
}
else
{
printf("number is odd");
}
break;
default:
printf("invalid choice");
}
getch();
}