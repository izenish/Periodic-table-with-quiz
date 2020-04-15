#include <iostream.h>
#include <stdio.h>
#include <process.h>
#include <conio.h>
#define m 5
int i,q[m],rear=-1,front=-1,data;
void enqueue();
void dequeue();
void display();
void main()
{
int c,yn;
X:
clrscr();
cout<<"Your Options are 1)Enqueue \n 2)Dequeue \n 3)Display"<<endl;
cin>>c;
switch(c)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
default:
cout<<"WRONG CHOICE TRY AGAIN";
goto X;
}
cout<<"Continue? 1/0";
cin>>yn;
if(yn==1)
goto X;
else
exit(0);
}

void enqueue()
{if(front==((rear+1)%m))
cout<<"queue overflow";
else if (front==-1&&rear==-1)
{
front=0;
rear=0;
cout<<"enter the data";
cin>>data;
q[rear]=data;
}
else
{cout<<"Enter the data";
cin>>data;
rear=(rear+1)%m;
q[rear]=data;
}
}
void dequeue()
{
if(front==-1)
cout<<"Q underflow";
else if(front==rear)
{data=q[front];
cout<<"THe data is \n"<<q[front];
front=-1;
rear=-1;
}
else
{
cout<<"the dequed item is"<<q[front];
front=((front+1)%m);
}
}
void display()
{
if(front==-1)
cout<<"Empty Queue";
else if(rear<front)
{for(i=0;i<=rear;i++)
{cout<<q[i]<<endl;
}
for(i=front;i<=m-1;i++)
{cout<<q[i]<<endl;
}    }
else{
for(i=front;i<=rear;i++)
{
cout<<q[i]<<endl;
}
}
}