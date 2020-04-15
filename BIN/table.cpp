#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
void box()
{
  rectangle(300,195,360,225);
  outtextxy(330,210,"H");
}       /*
void detail()
{
  cout<<"name=hydrogen"<<"\n";
  cout<<"at.no=1"<<"\n";
  cout<<"at.wt=1"<<"\n";
}         */
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

int main()
{
FILE *fp;
char ch;
  int x,y,b;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  getpointer();
while(!kbhit())
{       box();
	coo(&b,&x,&y);

	if(b==1)
	{
	  if(x>=300 && y>=195 && x<=360 && y<=225)
	   {  cleardevice();
	       fp=fopen("element.txt","r");
	if(fp==NULL)
	{
	printf("the file doesnot exist");
	exit(0);
	}
	//printf("The file opened successfully.\nreading the content of the file char by char");
	do
	{
	ch=fgetc(fp);
//setfillstyle(EMPTY_FILL,WHITE);
//floodfill(0,639,RED);
	putchar(ch);
	}
	while(ch!=EOF);
	{
	fclose(fp);
	}

	       outtextxy(10,199,"\npress any key to return mainmenu.......\n");
	       getch();
	       clrscr();
	       cleardevice();
	       getpointer(); }
	}
}
i.x.ax=2;
int86(0x33,&i,&o);
cout<<"press any key to exit().";
getch();
closegraph();
return(0);
}