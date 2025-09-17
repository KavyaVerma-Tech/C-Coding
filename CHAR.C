#include<stdio.h>
void main()
{
char ch;
clrscr();
printf("enter a character");
scanf(" %c",&ch);
if(ch>='A' && ch<='Z')
{
printf("Upercase");
}
else if(ch>='a' && ch<='z')
{
printf("Lowercase");
}
else if(ch>='0' && ch<='9')
{
printf("Digit");
}
else
{
printf("Special Symbol");
}
getch();
}