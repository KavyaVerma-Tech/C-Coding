#include<stdio.h>
void main()
{
char ch;
clrscr();
printf("enter any character:");
scanf(" %c",&ch);
if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
{
printf("it is an alphabet");
}
else
{
printf("it is not an alphabet");
}
getch();
}
