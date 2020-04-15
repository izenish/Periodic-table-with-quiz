#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
clrscr();
int x,y;
int gm,gd,dy=0;
gd=DETECT;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
while(!kbhit())
{
dy=dy+10;
printf("%d",dy);
//rectangle(x-300,y-190,x+300,y+200);//outer rectangle

setcolor(3);
settextstyle(0,0,2);
outtextxy(x-280,y+200-dy,"Developed by");
setcolor(15);
settextstyle(1,0,1);
outtextxy(x-280,y+240-dy,"1.Omit Bajracharya");
outtextxy(x-280,y+260-dy,"2.Rabin Prajapati");
outtextxy(x-280,y+280-dy,"3.Resha Dulal");
outtextxy(x-280,y+300-dy,"4.Riya Budhathoki");
setcolor(3);
settextstyle(0,0,2);
outtextxy(x-280,y+340-dy,"Tools and platforms");
setcolor(15);
settextstyle(1,0,1);
outtextxy(x-280,y+360-dy,"Turbo C (C graphics/File)");
delay(100);
cleardevice();
rectangle(0,y-190,2*x,2*y);//outer rectangle
line(x-300,y-150,x+300,y-150);
setcolor(14);
settextstyle(0,0,3);
outtextxy(x-85,y-180,"CREDIT");
if(dy==322)
{
  dy=0;
}
 }
getch();



}
