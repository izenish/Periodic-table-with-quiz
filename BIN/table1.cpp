#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
FILE *fp;
char ch;
  int x,y,b;
void box()
{
  rectangle(300,195,360,225);
  outtextxy(330,210,"H");
}
void table()
{
rectangle(30,100,100,200);
outtextxy(65,150,"periodic");
}
void details()
{
  cout<<"name=hydrogen"<<"\n";
  cout<<"at.no=1"<<"\n";
  cout<<"at.wt=1"<<"\n";
}
  union REGS i,o;

void mouse()
{
  i.x.ax=0;
  int86(51,&i,&o);
}
void getpointer()
{
  i.x.ax=1;
  int86(51,&i,&o);
}
void coo(int *b,int *x,int *y)
{
  i.x.ax=3;
  int86(0x33,&i,&o);
  *b=o.x.bx;
  *x=o.x.cx;
  *y=o.x.dx;
}
void periodic()
{

  box();
	coo(&b,&x,&y);
     getpointer();
while(!kbhit())
{       box();
	coo(&b,&x,&y);

	if(b==1)
	{
	  if(x>=300 && y>=195 && x<=360 && y<=225)
	   {  cleardevice();
		details();
	      outtextxy(10,199,"\npress any key to return mainmenu.......\n");
	       getch();
	       clrscr();
	       cleardevice();
	       getpointer();
	       }
	}
}
}

int main()
{

  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  getpointer();
while(!kbhit())
{       table();
	coo(&b,&x,&y);

	if(b==1)
	{
	  if(x>=30 && y>=100 && x<=100 && y<=200)
	   {  cleardevice();
	   periodic();
	     outtextxy(10,199,"\npress any key to return mainmenu.......\n");
	       getch();
	       clrscr();
	       cleardevice();
	       getpointer();
	       }
	}
}
i.x.ax=2;
int86(0x33,&i,&o);
cout<<"press any key to exit().";
getch();
closegraph();
return(0);
}