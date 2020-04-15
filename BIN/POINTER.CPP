
#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<dos.h>
void main()
{union REGS i,o;
clrscr();
i.x.ax=0;
int86(0x33,&i,&o);
if(o.x.ax==0)
{printf("mouse not supported");
exit(0);
}
i.x.ax=1;
int86(0x33,&i,&o);
while(!kbhit())
{i.x.ax=3;
int86(0x33,&i,&o);
printf("x:%d,y:%d,o.x.cx,o.x.dx");
delay(1000);
}
i.x.ax=2;
int86(0x33,&i,&o);
getch();
}

