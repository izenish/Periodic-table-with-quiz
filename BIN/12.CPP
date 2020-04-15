#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
FILE *fp;
char ch;
  int b,c,d;
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


void table()
{
rectangle(20,90,620,390);
line(80,90,80,390);
line(140,90,140,390);
line(200,90,200,390);
line(260,90,260,390);
line(320,90,320,390);
line(380,90,380,390);
line(440,90,440,390);
line(500,90,500,390);
line(560,90,560,390);
line(20,150,620,150);
line(20,210,620,210);
line(20,270,620,270);
line(20,330,620,330);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
outtextxy(120,40,"*********QUIZ*********");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(40,100,"1");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(100,100,"2");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(160,100,"3");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(220,100,"4");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(280,100,"5");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(340,100,"6");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(400,100,"7");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(460,100,"8");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(530,100,"9");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(580,100,"10");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(40,160,"11");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(100,160,"12");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(160,160,"13");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(220,160,"14");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(280,160,"15");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(340,160,"16");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(400,160,"17");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(460,160,"18");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(520,160,"19");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(580,160,"20");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(40,220,"21");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(100,220,"22");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(160,220,"23");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(220,220,"24");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(280,220,"25");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(340,220,"26");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(400,220,"27");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(460,220,"28");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(520,220,"29");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(580,220,"30");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(40,280,"31");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(100,280,"32");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(160,280,"33");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(220,280,"34");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(280,280,"35");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(340,280,"36");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(400,280,"37");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(460,280,"38");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(520,280,"39");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(580,280,"40");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(40,340,"41");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(100,340,"42");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(160,340,"43");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(220,340,"44");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(280,340,"45");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(340,340,"46");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(400,340,"47");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(460,340,"48");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(520,340,"49");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(580,340,"50");
}



 union REGS i,o;
void mouse()
{
i.x.ax=0;
int86(0X33,&i,&o);
}
void getpointer()
{i.x.ax=1;
int86(0X33,&i,&o);
}
void coordinate(int *b,int *c,int *d)
{
i.x.ax=3;
int86(0X33,&i,&o);
*b=o.x.bx;
*c=o.x.cx;
*d=o.x.dx;
}

void quiz()
{

  one();
	coordinate(&b,&c,&d);
     getpointer();
while(!kbhit())
{       one();
	coordinate(&b,&c,&d);

	if(b==1)
	{
	  if(c>=20 && d>=90 && c<=80 && d<=150)
	   {  cleardevice();

	      outtextxy(80,450,"\npress any key to return mainmenu.......\n");
	       getch();
	       clrscr();
	       cleardevice();
	       getpointer();
	       }
	}
}
}


void main()
{

  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  getpointer();
while(!kbhit())
{       table();
	coordinate(&b,&c,&d);
		if(b==1)
	{
	  if(c>=20 && d>=90 && c<=80 && d<=150)
	   {  cleardevice();

	      outtextxy(80,410,"\npress any key to return mainmenu.......\n");
	       getch();
	       clrscr();
	       cleardevice();
	       getpointer();
	       one();
	       }

	}

	}

//i.x.ax=2;
//int86(0x33,&i,&o);
//printf("press any key to exit.");
getch();


}