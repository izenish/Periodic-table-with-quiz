#include<graphics.h>
#include<conio.h>
#include<dos.h>
union REGS i,o;
void main()
{
int gd=DETECT,gm,status;
initgraph(&gd,&gm,"C:\\TC\\bgi");
rectangle(80,90,512,416);
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
