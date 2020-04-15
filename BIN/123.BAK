#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
clrscr();
int x,y;
int gm,gd;
gd=DETECT;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
setcolor(14);
settextstyle(1,0,5);
setfillstyle(1,14);
rectangle(x-150,y-100,x+190,y+60); //big
floodfill(x-110,y-40,14);
setfillstyle(1,14);
rectangle(x-130,y+90,x-41,y+130); //small
floodfill(x-129,y+129,14);
rectangle(x+92,y+90,x+180,y+130); //2 small
floodfill(x+93,y+91,14);
setcolor(4);
setfillstyle(1,4);
rectangle(x+124,y+96,x+169,y+102);
floodfill(x+125,y+97,4);
rectangle(x+99,y+105,x+169,y+111);
floodfill(x+100,y+106,4);
rectangle(x+99,y+115,x+169,y+121);
floodfill(x+125,y+120,4);
setcolor(3);
setfillstyle(1,3);
line(x+100,y+103,x+110,y+90);
line(x+110,y+90,x+120,y+103);
line(x+100,y+103,x+110,y+96);
line(x+110,y+96,x+120,y+103);
floodfill(x+110,y+91,3);
setcolor(4);
settextstyle(8,0,1);
setfillstyle(1,2);
line(x-100,y+99,x-100,y+120); //st
line(x-100,y+99,x-67,y+110);
line(x-100,y+120,x-67,y+110);
floodfill(x-99,y+100,4);
arc(x-80,y-30,0,360,20);
settextstyle(0,0,4);
outtextxy(200,80,"GAME OVER");
settextstyle(8,0,1);
outtextxy(x-110,y-90,"MEDAL");
outtextxy(x+110,y-90,"SCORE");
setfillstyle(1,15);
rectangle(x+140,y-60,x+170,y-30);
floodfill(x+150,y-50,4);
outtextxy(x+122,y-20,"BEST");
rectangle(x+140,y+10,x+170,y+40);
floodfill(x+150,y+20,4);
getch();
}
