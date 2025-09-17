#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
if(a<b && b<c)
{
printf("a is the smallest");
}
else if(b<a && a<c)
{
printf("b is the smallest");
}
else
{
printf("c is the smallest");
}
getch();
}