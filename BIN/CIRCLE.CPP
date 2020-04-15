
#include <dos.h>
#include <iostream.h>
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
int z=0;
void e(int x,int y)
{
for(int i=1;i<10;i++)
{if (i%2==0)
{
cleardevice();
circle(x,y,200);
setfillstyle(SOLID_FILL,BROWN);
circle(120,239,25);
floodfill(121,240,WHITE);
setfillstyle(SOLID_FILL,BROWN);
circle(518,239,25);
floodfill(519,240,WHITE);
delay(500);}
else
{cleardevice();
circle(x,y,200);
circle(319,40,25);
circle(319,438,25);}
delay(500);}
};
void main()
{
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
cout<<x<<endl<<y;
e(x,y);
getch();
}
