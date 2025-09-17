#include<stdio.h>
void main()
{
int choice,a,b,c;
clrscr();
printf("enter your choice:1,2,3,4,or5");
scanf("%d",&choice);
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
switch(choice)
{
case 1:
c=a+b;
printf("addition is %d",c);
break;
case 2:
c=a-b;
printf("subraction is %d",c);
break;
case 3:
c=a*b;
printf("multiplication is %d",c);
break;
case 4:
c=a/b;
printf("division is %d",c);
break;
case 5:
c=a%b;
printf("modulus is %d",c);
break;
default:
printf("invalid choice");
}
getch();
}