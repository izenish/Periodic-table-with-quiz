#include<stdio.h>
#include<conio.h>
void TOH(int,char,char,char);
void main()
{clrscr();
int n;
printf("\n enter the no. of disks");
scanf("%d",&n);
TOH(n,'X','Z','Y');
getch();
}
void TOH(int n,char X,char Z,char Y)
{if(n<=0)
printf("\n wrong input\n");
else
{if(n==1)
printf("\n move disc %d from peg %c to peg %c",n,X,Y);
else
{TOH(n-1,X,Y,Z);
TOH(1,X,Z,Y);
TOH(n-1,Z,X,Y);
}
}
}