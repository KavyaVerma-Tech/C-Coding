#include<stdio.h>
void main()
{
int i,sum=0;
clrscr();
for(i=1;i<=100;i++)
{
printf("i=%d\n",i);
sum=(sum+i);
printf("sum= %d\n",sum);
}
getch();
}