#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
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
void hidemouse()
{
 i.x.ax=2;
 int86(0x33,&i,&o);
 }

void one()
{
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(262,148,"QUIZ");
outtextxy(28,191,"The atomic number of an atom is the number of_______ in the atom's nucleus.");
outtextxy(80,230,"a)");
rectangle(100,221,250,251);
outtextxy(140,233,"Nucleus");

outtextxy(370,230,"b)");
rectangle(390,221,540,251);
outtextxy(430,233,"Electrons");

outtextxy(80,300,"c)");
rectangle(100,291,250,321);
outtextxy(140,303,"Protons");

outtextxy(370,300,"d)");
rectangle(390,291,540,321);
outtextxy(405,303,"Valence Electron");







}


void righta()
{
setfillstyle(SOLID_FILL,GREEN);
rectangle(100,221,250,251);
floodfill(101,222,WHITE);

}
void rightb()
{
hidemouse();
setfillstyle(SOLID_FILL,GREEN);
rectangle(390,221,250,321);
floodfill(391,222,WHITE);
mouse();
}
void rightc()
{
hidemouse();
setfillstyle(SOLID_FILL,GREEN);
rectangle(100,291,250,321);
floodfill(101,292,WHITE);
mouse();


}
void rightd()
{
hidemouse();
setfillstyle(SOLID_FILL,GREEN);
rectangle(390,291,540,321);
floodfill(101,292,WHITE);
mouse();
}
void point()
{  int a=1;
gotoxy(77,23);
printf("%d",a);
}

void wronga1()
{
hidemouse();
setfillstyle(SOLID_FILL,RED);
rectangle(100,221,250,251);
floodfill(101,222,WHITE);
mouse();
}
void wrongb()
{
hidemouse();
setfillstyle(SOLID_FILL,RED);
rectangle(390,221,540,251);
floodfill(391,222,WHITE);
mouse();
}
void wrongd()
{
hidemouse();
setfillstyle(SOLID_FILL,RED);
rectangle(390,291,540,321);
floodfill(391,292,WHITE);
mouse();
}
/*void wrong()
{
gotoxy(40,23);
printf("wrong answer!!!!!");
} */
/*void two()
{
cleardevice();
outtextxy(28,191,"which is more reactive Potassium or Krypton");
outtextxy(80,230,"a)");
rectangle(100,221,250,251);
outtextxy(140,233,"Potassium");

outtextxy(370,230,"b)");
rectangle(390,221,540,251);
outtextxy(430,233,"Krypton");

outtextxy(80,300,"c)");
rectangle(100,291,250,321);
outtextxy(140,303,"Both");

outtextxy(370,300,"d)");
rectangle(390,291,540,321);
outtextxy(405,303,"Neither");

}
*/
void main()
{

int gd=DETECT,gm,b,x,y;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
setfillstyle(SOLID_FILL,CYAN);
rectangle(20,131,630,380);
floodfill(21,132,WHITE);
rectangle(490,350,630,380);
outtextxy(500,360,"Your points:");
  getpointer();
while(!kbhit())
{       one();
	coo(&b,&x,&y);

	if(b==1)
	{
	  if(x>=100 && y>=291 && x<=250 && y<=391)
	   {  //cleardevice();
	       rightc();
	       point();
	       setcolor(WHITE);
	       //outtextxy(10,599,"\npress any key to return mainmenu.......\n");
	       //getch();
	       //clrscr();
	       //cleardevice();
	       //getpointer();
	   }
	   else if(x>=100 && y>=221 && x<=250 && y<=251)
	   {

	   wronga1();
	   }
	  else if(x>=390 && y>=221 && x<=540 && y<=251)
	  { wrongb();
	  }
	  else if (x>=390 && y>=291 && x<=540 && y<=321)
	 { wrongd();


	  }

	  //wrong();
	  }
	  getpointer();

}
//i.x.ax=2;
//int86(0x33,&i,&o);
//printf("press any key to exit().");
getch();
//closegraph();

}