#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
	void page();
		FILE *fp;
		char ch;
       int x,y,b;

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
void table()
{
 rectangle(