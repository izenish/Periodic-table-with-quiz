#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int initmouse();
void showmouseptr();
union REGS i,o;
int main()
{int status,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
status=initmouse();
if(status==0)
printf("mouse not supported");
else
showmouseptr();
getch();
}
int initmouse()
{i.x.ax=0;
int86(0X33,&i,&o);
return(o.x.ax);
}
void showmouseptr()
{i.x.ax=1;
int86(0X33,&i,&o);
}