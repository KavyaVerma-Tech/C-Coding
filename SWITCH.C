#include<stdio.h>
void main()
{
char choice;
clrscr();
printf("enter your choice from a,e,i,o,u");
scanf(" %c",&choice);
switch(choice)
{
case'a':
printf("choice is vowel");
break;
case'e':
printf("choice is vowel");
break;
case'i':
printf("choice is vowel");
break;
case'o':
printf("choice is vowel");
break;
case'u':
printf("choice is vowel");
break;
default:
printf("this is a consonant");
}
getch();
}