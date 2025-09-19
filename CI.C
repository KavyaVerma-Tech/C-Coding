#include<stdio.h>
#include<math.h>
void main()
{
int ci,a,p,r,t;
clrscr();
printf("enter the value of p:");
scanf("%d",&p);
printf("enter the value of r:");
scanf("%d",&r);
printf("enter the value of t:");
scanf("%d",&t);
a = p * pow((1+r/100),t);
ci = a - p;
printf("compound interest is = %d",ci);
getch();
}
