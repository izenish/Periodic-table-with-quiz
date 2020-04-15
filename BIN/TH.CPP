#include<stdio.h>
#include<conio.h>
void TOH(int,char,char,char);
void main()
{int n;
clrscr();
printf("enter the no of disks");
scanf("%d",&n);
TOH(n,'X','Z','Y');
getch();
}
void TOH(int n, char X,char Z,char Y)
{if(n>0)
 {TOH(n-1,X,Y,Z);
 printf("move the disks from %c peg to %c",X,Y);
 TOH(n-1,Z,X,Y);
 }
 }