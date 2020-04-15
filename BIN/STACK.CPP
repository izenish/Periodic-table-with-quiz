#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int data,choice,maxsize=3,top=-1;
int stack[3],i;
char ch;
do
{
printf("1.Push");
printf("\n2.Pop");
printf("\n3.Display");
printf("\nenter your choice");
scanf("%d",&choice);
switch(choice)
{case 1:
if(top>maxsize-1)
{printf("Stack Overflow");
}
else
{printf("enter the data");
scanf("%d",&data);
top=top+1;
stack[top]=data;
}
break;
case 2:
if(top<0)
{printf("stack underflow");
}
else
{data=stack[top];
printf("the poped data is %d",data);
top=top-1;
}
break;
case 3:
if(top<0)
{printf("stack is empty");
}
else
{for(i=0;i<=top;i++)
{printf("%d\t",stack[i]);
}
}
break;
}
printf("do you want to continue(y\n)?");
scanf("%c",&ch);
}
while(ch!='n');
getch();
}
