#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
union REGS i,o;
int main()
{
int stat
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\bgi");
rectangle(80,90,512,416);
getch();
}
