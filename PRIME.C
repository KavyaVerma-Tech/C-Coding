#include<stdio.h>
void main()
{
int i,num,count=0;
clrscr();
printf("enter a number:");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
count=count++;
}
if(count==0)
{
printf("prime number");
}
else
{
printf("not a prime number");
}
getch();
}