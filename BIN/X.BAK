#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void table();
void firstpage();
int initmouse();

void getmousepos(int *, int *, int *);
void information();
void showmouseptr();

int button,x,y;

union REGS in, out;
char b;
int initmouse()
{
   in.x.ax = 0;
   int86(0X33, &in, &out);
   return ( out.x.ax );
}

void showmouseptr()
{
   in.x.ax = 1;
   int86(0X33, &in, &out);
}

void getmousepos(int *button, int *x, int *y)
{
   in.x.ax = 3;
   int86(0X33, &in, &out);

   *button = out.x.bx;
   *x = out.x.cx;
   *y = out.x.dx;
}


void table()
{
rectangle(0,100,35,130);	//1
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(1,105,WHITE);
rectangle(595,100,630,130);	//2
setfillstyle(SOLID_FILL,CYAN);
floodfill(596,101,WHITE);
rectangle(0,130,35,160);	//3
setfillstyle(SOLID_FILL,BROWN);
floodfill(1,135,WHITE);
rectangle(35,130,70,160);	//4
setfillstyle(SOLID_FILL,RED);
floodfill(36,131,WHITE);
rectangle(420,130,455,160);	//5
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(421,131,WHITE);
rectangle(455,130,490,160);	//6
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(456,131,WHITE);
rectangle(490,130,525,160);	//7
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(491,131,WHITE);
rectangle(525,130,560,160);	//8
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(526,131,WHITE);
rectangle(560,130,595,160);     //9
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(561,131,WHITE);
rectangle(595,130,630,160);     //10
setfillstyle(SOLID_FILL,CYAN);
floodfill(596,131,WHITE);
rectangle(0,160,35,190);	//11
setfillstyle(SOLID_FILL,BROWN);
floodfill(1,161,WHITE);
rectangle(35,160,70,190);	//12
setfillstyle(SOLID_FILL,RED);
floodfill(36,161,WHITE);
rectangle(420,160,455,190);	//13
setfillstyle(SOLID_FILL,GREEN);
floodfill(421,161,WHITE);
rectangle(455,160,490,190);	//14
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(456,161,WHITE);
rectangle(490,160,525,190);	//15
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(491,161,WHITE);
rectangle(525,160,560,190);	//16
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(526,161,WHITE);
rectangle(560,160,595,190);	//17
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(561,161,WHITE);
rectangle(595,160,630,190);	//18
setfillstyle(SOLID_FILL,CYAN);
floodfill(596,161,WHITE);
rectangle(0,190,35,220);	//19
setfillstyle(SOLID_FILL,BROWN);
floodfill(1,191,WHITE);
rectangle(35,190,70,220);	//20
setfillstyle(SOLID_FILL,RED);
floodfill(36,191,WHITE);
rectangle(70,190,105,220);	//21
setfillstyle(SOLID_FILL,YELLOW);
floodfill(71,191,WHITE);
rectangle(105,190,140,220); 	//22
setfillstyle(SOLID_FILL,YELLOW);
floodfill(106,191,WHITE);
rectangle(140,190,175,220);	//23
setfillstyle(SOLID_FILL,YELLOW);
floodfill(141,191,WHITE);
rectangle(175,190,210,220);     //24
setfillstyle(SOLID_FILL,YELLOW);
floodfill(176,191,WHITE);
rectangle(210,190,245,220);	//25
setfillstyle(SOLID_FILL,YELLOW);
floodfill(211,191,WHITE);
rectangle(245,190,280,220);	//26
setfillstyle(SOLID_FILL,YELLOW);
floodfill(246,191,WHITE);
rectangle(280,190,315,220); 	//27
setfillstyle(SOLID_FILL,YELLOW);
floodfill(281,191,WHITE);
rectangle(315,190,350,220); 	//28
setfillstyle(SOLID_FILL,YELLOW);
floodfill(316,191,WHITE);
rectangle(350,190,385,220);	//29
setfillstyle(SOLID_FILL,YELLOW);
floodfill(351,191,WHITE);
rectangle(385,190,420,220);	//30
setfillstyle(SOLID_FILL,YELLOW);
floodfill(386,191,WHITE);
rectangle(420,190,455,220);	//31
setfillstyle(SOLID_FILL,GREEN);
floodfill(421,191,WHITE);
rectangle(455,190,490,220);	//32
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(456,191,WHITE);
rectangle(490,190,525,220);	//33
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(491,191,WHITE);
rectangle(525,190,560,220);	//34
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(526,191,WHITE);
rectangle(560,190,595,220);	//35
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(561,191,WHITE);
rectangle(595,190,630,220);	//36
setfillstyle(SOLID_FILL,CYAN);
floodfill(596,191,WHITE);
rectangle(0,220,35,250);	//37
setfillstyle(SOLID_FILL,BROWN);
floodfill(1,221,WHITE);
rectangle(35,220,70,250);	//38
setfillstyle(SOLID_FILL,RED);
floodfill(36,221,WHITE);
rectangle(70,220,105,250);	//39
setfillstyle(SOLID_FILL,YELLOW);
floodfill(71,221,WHITE);
rectangle(105,220,140,250);	//40
setfillstyle(SOLID_FILL,YELLOW);
floodfill(106,221,WHITE);
rectangle(140,220,175,250);	//41
setfillstyle(SOLID_FILL,YELLOW);
floodfill(141,221,WHITE);
rectangle(175,220,210,250);	//42
setfillstyle(SOLID_FILL,YELLOW);
floodfill(176,221,WHITE);
rectangle(210,220,245,250);	//43
setfillstyle(SOLID_FILL,YELLOW);
floodfill(211,221,WHITE);
rectangle(245,220,280,250);	//44
setfillstyle(SOLID_FILL,YELLOW);
floodfill(246,221,WHITE);
rectangle(280,220,315,250);	//45
setfillstyle(SOLID_FILL,YELLOW);
floodfill(281,221,WHITE);
rectangle(315,220,350,250);	//46
setfillstyle(SOLID_FILL,YELLOW);
floodfill(316,221,WHITE);
rectangle(350,220,385,250);	//47
setfillstyle(SOLID_FILL,YELLOW);
floodfill(351,221,WHITE);
rectangle(385,220,420,250);	//48
setfillstyle(SOLID_FILL,YELLOW);
floodfill(386,221,WHITE);
rectangle(420,220,455,250);	//49
setfillstyle(SOLID_FILL,GREEN);
floodfill(421,221,WHITE);
rectangle(455,220,490,250);	//50
setfillstyle(SOLID_FILL,GREEN);
floodfill(456,221,WHITE);
rectangle(490,220,525,250);	//51
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(491,221,WHITE);
rectangle(525,220,560,250);	//52
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(526,221,WHITE);
rectangle(560,220,595,250);	//53
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(561,221,WHITE);
rectangle(595,220,630,250);	//54
setfillstyle(SOLID_FILL,CYAN);
floodfill(596,221,WHITE);
rectangle(0,250,35,280); 	//55
setfillstyle(SOLID_FILL,BROWN);
floodfill(1,251,WHITE);
rectangle(35,250,70,280); 	//56
setfillstyle(SOLID_FILL,RED);
floodfill(36,251,WHITE);
rectangle(105,380,140,410);     //57
setfillstyle(SOLID_FILL,BLUE);
floodfill(106,381,WHITE);
rectangle(140,380,175,410);	//58
setfillstyle(SOLID_FILL,BLUE);
floodfill(141,381,WHITE);
rectangle(175,380,210,410);	//59
setfillstyle(SOLID_FILL,BLUE);
floodfill(176,381,WHITE);
rectangle(210,380,245,410);	//60
setfillstyle(SOLID_FILL,BLUE);
floodfill(211,381,WHITE);
rectangle(245,380,280,410);	//61
setfillstyle(SOLID_FILL,BLUE);
floodfill(246,381,WHITE);
rectangle(280,380,315,410);	//62
setfillstyle(SOLID_FILL,BLUE);
floodfill(281,381,WHITE);
rectangle(315,380,350,410);	//63
setfillstyle(SOLID_FILL,BLUE);
floodfill(316,381,WHITE);
rectangle(350,380,385,410);	//64
setfillstyle(SOLID_FILL,BLUE);
floodfill(351,381,WHITE);
rectangle(385,380,420,410);  	//65
setfillstyle(SOLID_FILL,BLUE);
floodfill(386,381,WHITE);
rectangle(420,380,455,410); 	//66
setfillstyle(SOLID_FILL,BLUE);
floodfill(421,381,WHITE);
rectangle(455,380,490,410);	//67
setfillstyle(SOLID_FILL,BLUE);
floodfill(456,381,WHITE);
rectangle(490,380,525,410);	//68
setfillstyle(SOLID_FILL,BLUE);
floodfill(491,381,WHITE);
rectangle(525,380,560,410);	//69
setfillstyle(SOLID_FILL,BLUE);
floodfill(526,381,WHITE);
rectangle(560,380,595,410);	//70
setfillstyle(SOLID_FILL,BLUE);
floodfill(561,381,WHITE);
rectangle(595,380,630,410);	//71
setfillstyle(SOLID_FILL,BLUE);
floodfill(596,381,WHITE);
rectangle(105,250,140,280);	//72
setfillstyle(SOLID_FILL,YELLOW);
floodfill(106,251,WHITE);
rectangle(140,250,175,280);	//73
setfillstyle(SOLID_FILL,YELLOW);
floodfill(141,251,WHITE);
rectangle(175,250,210,280);	//74
setfillstyle(SOLID_FILL,YELLOW);
floodfill(176,251,WHITE);
rectangle(210,250,245,280);	//75
setfillstyle(SOLID_FILL,YELLOW);
floodfill(211,251,WHITE);
rectangle(245,250,280,280);	//76
setfillstyle(SOLID_FILL,YELLOW);
floodfill(246,251,WHITE);
rectangle(280,250,315,280);	//77
setfillstyle(SOLID_FILL,YELLOW);
floodfill(281,251,WHITE);
rectangle(315,250,350,280);	//78
setfillstyle(SOLID_FILL,YELLOW);
floodfill(316,251,WHITE);
rectangle(350,250,385,280);	//79
setfillstyle(SOLID_FILL,YELLOW);
floodfill(351,251,WHITE);
rectangle(385,250,420,280);	//80
setfillstyle(SOLID_FILL,YELLOW);
floodfill(386,251,WHITE);
rectangle(420,250,455,280);	//81
setfillstyle(SOLID_FILL,GREEN);
floodfill(421,251,WHITE);
rectangle(455,250,490,280);	//82
setfillstyle(SOLID_FILL,GREEN);
floodfill(456,251,WHITE);
rectangle(490,250,525,280); 	//83
setfillstyle(SOLID_FILL,GREEN);
floodfill(491,251,WHITE);
rectangle(525,250,560,280);  	//84
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(526,251,WHITE);
rectangle(560,250,595,280); 	//85
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(561,251,WHITE);
rectangle(595,250,630,310); 	//79
setfillstyle(SOLID_FILL,CYAN);
floodfill(596,251,WHITE);
rectangle(0,280,35,310);	//87
setfillstyle(SOLID_FILL,BROWN);
floodfill(1,281,WHITE);
rectangle(35,280,70,310);	//88
setfillstyle(SOLID_FILL,RED);
floodfill(36,281,WHITE);
rectangle(105,410,140,440);	//89
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(106,411,WHITE);
rectangle(140,410,175,440); 	//90
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(141,411,WHITE);
rectangle(175,410,210,440);	//91
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(176,411,WHITE);
rectangle(210,410,245,440);	//92
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(211,411,WHITE);
rectangle(245,410,280,440);	//93
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(246,411,WHITE);
rectangle(280,410,315,440); 	//94
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(281,411,WHITE);
rectangle(315,410,350,440);	//95
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(316,411,WHITE);
rectangle(350,410,385,440);	//96
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(351,411,WHITE);
rectangle(385,410,420,440); 	//97
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(386,411,WHITE);
rectangle(420,410,455,440);	//98
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(421,411,WHITE);
rectangle(455,410,490,440);	//99
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(456,411,WHITE);
rectangle(490,410,525,440); 	//100
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(491,411,WHITE);
rectangle(525,410,560,440); 	//101
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(526,411,WHITE);
rectangle(560,410,595,440);	//102
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(561,411,WHITE);
rectangle(595,410,630,440); 	//103
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(596,411,WHITE);
rectangle(105,280,140,310); 	//104
setfillstyle(SOLID_FILL,YELLOW);
floodfill(106,281,WHITE);
rectangle(140,280,175,310); 	//105
setfillstyle(SOLID_FILL,YELLOW);
floodfill(141,281,WHITE);
rectangle(175,280,210,310);	//106
setfillstyle(SOLID_FILL,YELLOW);
floodfill(176,281,WHITE);
rectangle(210,280,245,310);	//107
setfillstyle(SOLID_FILL,YELLOW);
floodfill(211,281,WHITE);
rectangle(245,280,280,310);	//108
setfillstyle(SOLID_FILL,YELLOW);
floodfill(246,281,WHITE);
rectangle(280,280,315,310); 	//109
setfillstyle(SOLID_FILL,YELLOW);
floodfill(281,281,WHITE);
rectangle(315,280,350,310); 	//110
setfillstyle(SOLID_FILL,YELLOW);
floodfill(316,281,WHITE);
rectangle(350,280,385,310);	//111
setfillstyle(SOLID_FILL,YELLOW);
floodfill(351,281,WHITE);
rectangle(385,280,420,310);	//112
setfillstyle(SOLID_FILL,YELLOW);
floodfill(386,281,WHITE);
rectangle(420,280,455,310);	//113
setfillstyle(SOLID_FILL,GREEN);
floodfill(421,281,WHITE);
rectangle(455,280,490,310);	//114
setfillstyle(SOLID_FILL,GREEN);
floodfill(456,281,WHITE);
rectangle(490,280,525,310);	//115
setfillstyle(SOLID_FILL,GREEN);
floodfill(491,281,WHITE);
rectangle(525,280,560,310);	//116
setfillstyle(SOLID_FILL,GREEN);
floodfill(526,281,WHITE);
rectangle(560,280,595,310);	//117
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(561,281,WHITE);
rectangle(595,280,630,310);	//118
setfillstyle(SOLID_FILL,CYAN);
floodfill(596,281,WHITE);
   //elements name
setcolor(BLACK);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(10,105,"1.");
outtextxy(10,120,"H");

outtextxy(10,135,"3.");
outtextxy(10,150,"Li");

outtextxy(10,165,"11.");
outtextxy(10,180,"Na");

outtextxy(10,195,"19.");
outtextxy(10,210,"K");

outtextxy(10,225,"37.");
outtextxy(10,240,"Rb");

outtextxy(10,255,"55.");
outtextxy(10,270,"Cs");

outtextxy(10,285,"87.");
outtextxy(10,300,"Fr");

outtextxy(45,135,"4.");
outtextxy(45,150,"Be");

outtextxy(45,165,"12.");
outtextxy(45,180,"Mg");

outtextxy(45,195,"20.");
outtextxy(45,210,"Ca");

outtextxy(45,225,"38.");
outtextxy(45,240,"Sr");

outtextxy(45,255,"56.");
outtextxy(45,270,"Ba");

outtextxy(45,285,"88.");
outtextxy(45,300,"Ra");

outtextxy(80,195,"21.");
outtextxy(80,210,"Sc");

outtextxy(80,225,"39.");
outtextxy(80,240,"Y");


outtextxy(115,195,"22.");
outtextxy(115,210,"Ti");

outtextxy(115,225,"40.");
outtextxy(115,240,"Zr");

outtextxy(115,255,"72.");
outtextxy(115,270,"Hf" );

outtextxy(110,285,"104.");
outtextxy(115,300,"Rf");

outtextxy(150,195,"23.");
outtextxy(150,210,"V");

outtextxy(150,225,"41.");
outtextxy(150,240,"Nb");

outtextxy(150,255,"73.");
outtextxy(150,270,"Ta" );

outtextxy(145,285,"105.");
outtextxy(150,300,"Db");

outtextxy(185,195,"24.");
outtextxy(185,210,"Cr");

outtextxy(185,225,"42.");
outtextxy(185,240,"Mo");

outtextxy(185,255,"74.");
outtextxy(185,270,"W" );

outtextxy(180,285,"106.");
outtextxy(185,300,"Sg");

outtextxy(220,195,"25.");
outtextxy(220,210,"Mn");

outtextxy(220,225,"43.");
outtextxy(220,240,"Tc");

outtextxy(220,255,"75.");
outtextxy(220,270,"Re" );

outtextxy(215,285,"107.");
outtextxy(220,300,"Bh");

outtextxy(255,195,"26.");
outtextxy(255,210,"Fe");

outtextxy(255,225,"44.");
outtextxy(255,240,"Ru");

outtextxy(255,255,"76.");
outtextxy(255,270,"Os" );

outtextxy(250,285,"108.");
outtextxy(255,300,"Hs");

outtextxy(290,195,"27.");
outtextxy(290,210,"Co");

outtextxy(290,225,"45.");
outtextxy(290,240,"Rh");

outtextxy(290,255,"77.");
outtextxy(290,270,"Ir" );

outtextxy(285,285,"109.");
outtextxy(290,300,"Mt");

outtextxy(325,195,"28.");
outtextxy(325,210,"Ni");

outtextxy(325,225,"46.");
outtextxy(325,240,"Pd");

outtextxy(325,255,"78.");
outtextxy(325,270,"Pt" );

outtextxy(320,285,"110.");
outtextxy(325,300,"Ds");

outtextxy(360,195,"29.");
outtextxy(360,210,"Cu");

outtextxy(360,225,"47.");
outtextxy(360,240,"Ag");

outtextxy(360,255,"79.");
outtextxy(360,270,"Au" );

outtextxy(355,285,"111.");
outtextxy(360,300,"Rg");

outtextxy(395,195,"30.");
outtextxy(395,210,"Zn");

outtextxy(395,225,"48.");
outtextxy(395,240,"Cd");

outtextxy(395,255,"80.");
outtextxy(395,270,"Hg" );

outtextxy(390,285,"112.");
outtextxy(395,300,"Cn");

outtextxy(435,135,"5.");
outtextxy(435,150,"B");

outtextxy(430,165,"13.");
outtextxy(430,180,"Al");

outtextxy(430,195,"31.");
outtextxy(430,210,"Ga");

outtextxy(430,225,"49.");
outtextxy(430,240,"In");

outtextxy(430,255,"81.");
outtextxy(430,270,"Tl" );

outtextxy(425,285,"113.");
outtextxy(425,300,"Uut");

outtextxy(465,135,"6.");
outtextxy(465,150,"C");

outtextxy(465,165,"14.");
outtextxy(465,180,"Si");

outtextxy(465,195,"32.");
outtextxy(465,210,"Ge");

outtextxy(465,225,"50.");
outtextxy(465,240,"Sn");

outtextxy(465,255,"82.");
outtextxy(460,270,"Pb" );

outtextxy(460,285,"114.");
outtextxy(460,300,"Fl");

outtextxy(500,135,"7.");
outtextxy(500,150,"N");

outtextxy(500,165,"15.");
outtextxy(505,180,"P");

outtextxy(500,195,"33.");
outtextxy(500,210,"As");

outtextxy(500,225,"51.");
outtextxy(500,240,"Sb");

outtextxy(500,255,"83.");
outtextxy(500,270,"Bi" );

outtextxy(495,285,"115.");
outtextxy(495,300,"Uup");

outtextxy(535,135,"8.");
outtextxy(540,150,"O");

outtextxy(535,165,"16.");
outtextxy(540,180,"S");

outtextxy(535,195,"34.");
outtextxy(535,210,"Se");

outtextxy(535,225,"52.");
outtextxy(535,240,"Te");

outtextxy(535,255,"84.");
outtextxy(535,270,"Po" );

outtextxy(530,285,"116.");
outtextxy(535,300,"Lv");

outtextxy(570,135,"8.");
outtextxy(575,150,"F");

outtextxy(570,165,"17.");
outtextxy(570,180,"Cl");

outtextxy(570,195,"35.");
outtextxy(570,210,"Br");

outtextxy(570,225,"53.");
outtextxy(575,240,"I");

outtextxy(570,255,"85.");
outtextxy(570,270,"At" );

outtextxy(565,285,"117.");
outtextxy(565,300,"Uus");

outtextxy(605,105,"2.");
outtextxy(605,120,"He");

outtextxy(605,135,"10.");
outtextxy(605,150,"Ne");

outtextxy(605,165,"18.");
outtextxy(605,180,"Ar");

outtextxy(605,195,"36.");
outtextxy(605,210,"Kr");

outtextxy(605,225,"54.");
outtextxy(605,240,"Xe");

outtextxy(605,255,"86.");
outtextxy(605,270,"Rn" );

outtextxy(600,285,"118.");
outtextxy(600,300,"Uuo");
//elements of lenthenoids and actenoids
outtextxy(115,385,"57.");
outtextxy(115,400,"La.");

outtextxy(115,415,"89.");
outtextxy(115,430,"Ac");

outtextxy(150,385,"58.");
outtextxy(150,400,"Ce");

outtextxy(150,415,"90.");
outtextxy(150,430,"Th");

outtextxy(185,385,"59.");
outtextxy(185,400,"Pr");

outtextxy(185,415,"91.");
outtextxy(185,430,"Pa");

outtextxy(220,385,"60.");
outtextxy(220,400,"Nd");

outtextxy(220,415,"92.");
outtextxy(225,430,"U");

outtextxy(255,385,"61.");
outtextxy(255,400,"Pm");

outtextxy(255,415,"93.");
outtextxy(255,430,"Np");

outtextxy(290,385,"62.");
outtextxy(290,400,"Sm");

outtextxy(290,415,"94.");
outtextxy(290,430,"Pu");

outtextxy(325,385,"63.");
outtextxy(325,400,"Eu");

outtextxy(325,415,"95.");
outtextxy(325,430,"Am");

outtextxy(360,385,"64.");
outtextxy(360,400,"Gd");

outtextxy(360,415,"96.");
outtextxy(360,430,"Cm");

outtextxy(395,385,"65.");
outtextxy(395,400,"Tb");

outtextxy(395,415,"97.");
outtextxy(395,430,"Bk");

outtextxy(430,385,"66.");
outtextxy(430,400,"Dy");

outtextxy(430,415,"98.");
outtextxy(430,430,"Cf");

outtextxy(465,385,"67.");
outtextxy(465,400,"Ho");

outtextxy(465,415,"99.");
outtextxy(465,430,"Es");

outtextxy(500,385,"68.");
outtextxy(500,400,"Er");

outtextxy(495,415,"100.");
outtextxy(500,430,"Fm");

outtextxy(535,385,"69.");
outtextxy(535,400,"Tm");

outtextxy(530,415,"101.");
outtextxy(535,430,"Md");

outtextxy(570,385,"70.");
outtextxy(570,400,"Yb");

outtextxy(565,415,"102.");
outtextxy(570,430,"No");

outtextxy(605,385,"71.");
outtextxy(605,400,"Lu");

outtextxy(600,415,"103.");
outtextxy(605,430,"Lr");


}
void firstpage()
{
cleardevice();

setfillstyle(SOLID_FILL,BLACK);
rectangle(70,131,560,380);
floodfill(71,132,WHITE);

setfillstyle(SOLID_FILL,BLUE);
rectangle(81,143,550,369);
floodfill(71,132,WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(262,148,"MENU");
rectangle(88,189,197,216);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(90,199,"PeriodicTable");
rectangle(88,229,197,256);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(93,239,"Glossary");
rectangle(88,269,197,296);
outtextxy(96,279,"Illustration");
rectangle(88,309,197,336);
outtextxy(99,319,"Quiz");
settextstyle(0,EMPTY_FILL,13);
setcolor(YELLOW);
outtextxy(310,219,"C");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
setcolor(RED);
outtextxy(340,258,"HEMISTRY APP");

showmouseptr();
while(!kbhit())
{
getmousepos(&button,&x,&y);
  if(button==1)
  {
if(x>=88 && y>=189 && x<=197 && y<=216)
{table();}
}
}
};


void main()
{ int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
bar(150,300,500,320);
outtextxy(280,270,"LOADING..");
for(int l=0;l<=350;l++)
{
for(int o=0;o<=20;o++)
{
setcolor(BROWN);
line(150,300+o,150+l,300+o);
}
delay(10);
}
for(int o=1;o<=15;o++)
{
setcolor(o);
outtextxy(280,270,"LOADING..");
delay(25);
}

firstpage();
getch();
}




