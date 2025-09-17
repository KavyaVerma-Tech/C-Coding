#include<stdio.h>
void main()
{
int n,i,mult;
clrscr();
printf("enter the number whose multiplication table is to be calculated\n");
scanf("%d",&n);
printf("the multiplication table is:");
for(i=1;i<=10;i++)
{
mult = n * i;
printf("%d * %d = %d", n, i, mult);
}
getch();
}