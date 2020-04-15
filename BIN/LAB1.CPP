#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int gd,gm,x,y;
gd=DETECT;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
outtextxy(x,y-105,"x");
outtextxy(x+105,y,"y");
line(x,y-100,x,y+100);
line(x-100,y,x+100,y);
int lenx,leny;
printf("Enter length of triangle");
scanf("%d",&lenx);
printf("Enter height of triangle");
scanf("%d",&leny);
int x1,x2,y1,y2,x3,y3;
x1=x+30;
y1=y-30-leny;
x2=x+30;
y2=y-30;
x3=x+30+lenx;
y3=y-30;
line(x+30,y-30-leny,x+30,y-30);
line(x+30,y-30,x+30+lenx,y-30);
line(x+30,y-30-leny,x+30+lenx,y-30);
arc(x+30,y-30,0,45,10);
outtextxy(x+40,y-40,"45");
outtextxy(x+30,y-40-leny,"x,y");
printf("Enter 1 to rotate\nEnter 2 to transtale");
int choice,p,q;
scanf("%d",&choice);
switch(choice){
case 1:
float Angle,a1,b1,a2,b2,a3,b3;
p=x+30;
q=y-30;
printf("Enter the angle for rotation:");
    scanf("%f",&Angle);
    Angle=(Angle*3.14)/180;	
    a1=p+(x1-p)*cos(Angle)-(y1-q)*sin(Angle);
    b1=q+(x1-p)*sin(Angle)+(y1-q)*cos(Angle);        
    a2=p+(x2-p)*cos(Angle)-(y2-q)*sin(Angle);
    b2=q+(x2-p)*sin(Angle)+(y2-q)*cos(Angle);

    a3=p+(x3-p)*cos(Angle)-(y3-q)*sin(Angle);
    b3=q+(x3-p)*sin(Angle)+(y3-q)*cos(Angle);
    setcolor(WHITE);
    line(a1,b1,a2,b2);
    outtextxy(a1,b1-5,"x',y'");
    line(a2,b2,a3,b3);
    line(a3,b3,a1,b1);

//break;
case 2:
setcolor(WHITE);
line(x+90,y-90-leny,x+90,y-90);
line(x+90,y-90,x+90+lenx,y-90);
line(x+90,y-90-leny,x+90+lenx,y-90);
break;
}


getch();
}

