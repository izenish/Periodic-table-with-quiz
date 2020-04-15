
//periodic table ko lagi
void f1(int x1,int y1,int x2,int y2,int c)
{

rectangle(x1,y1,x2,y2);	//1
setfillstyle(SOLID_FILL,c);
floodfill(x1+1,y1+5,WHITE);

}

void table()
{
outtextxy(15,90,"1");
outtextxy(50,90,"2");
outtextxy(85,90,"3");
outtextxy(120,90,"4");
outtextxy(155,90,"5");
outtextxy(190,90,"6");
outtextxy(225,90,"7");
outtextxy(260,90,"8");
outtextxy(295,90,"9");
outtextxy(325,90,"10");
outtextxy(360,90,"11");
outtextxy(395,90,"12");
outtextxy(430,90,"13");
outtextxy(465,90,"14");
outtextxy(500,90,"15");
outtextxy(535,90,"16");
outtextxy(570,90,"17");
outtextxy(605,90,"18");

rectangle(60,10,70,20);	
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(61,11,WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(72,12,"Halogens");

rectangle(60,30,70,40);
setfillstyle(SOLID_FILL,CYAN);
floodfill(61,31,WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(72,33,"Noble Gases");

rectangle(60,50,70,60);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(61,51,WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(72,52,"Other nonmetals");

rectangle(225,10,235,20);	
setfillstyle(SOLID_FILL,BROWN);
floodfill(226,11,WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(237,12,"Alkali metals");

rectangle(225,25,235,35);
setfillstyle(SOLID_FILL,RED);
floodfill(226,26,WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(237,27,"Alkaline earth metals");

rectangle(225,40,235,50);
setfillstyle(SOLID_FILL,BLUE);
floodfill(226,41,WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(237,42,"Lanthanides");

rectangle(225,55,235,65);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(226,56,WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(237,57,"Actinides");

rectangle(430,10,440,20);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(431,11,WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(442,12,"Transition metals");

rectangle(430,30,440,40);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(431,31,WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(442,32,"Metalloids");

rectangle(430,50,440,60);
setfillstyle(SOLID_FILL,GREEN);
floodfill(431,51,WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(442,52,"Post-transition metals");





f1(0,100,35,130,8);
f1(595,100,630,130,3);
f1(0,130,35,160,6);
f1(35,130,70,160,4);
f1(420,130,455,160,10);
f1(455,130,490,160,8);
f1(490,130,525,160,8);
f1(525,130,560,160,8);
f1(560,130,595,160,9);
f1(595,130,630,160,3);
f1(0,160,35,190,6);
f1(35,160,70,190,4);
f1(420,160,455,190,2);
f1(455,160,490,190,10);
f1(490,160,525,190,8);
f1(525,160,560,190,8);
f1(560,160,595,190,9);
f1(595,160,630,190,3);
f1(0,190,35,220,6);
f1(35,190,70,220,4);
f1(70,190,105,220,14);
f1(105,190,140,220,14);
f1(140,190,175,220,14);
f1(175,190,210,220,14);
f1(210,190,245,220,14);
f1(245,190,280,220,14);
f1(280,190,315,220,14);
f1(315,190,350,220,14);
f1(350,190,385,220,14);
f1(385,190,420,220,14);
f1(420,190,455,220,2);
f1(455,190,490,220,10);
f1(490,190,525,220,10);
f1(525,190,560,220,8);
f1(560,190,595,220,9);
f1(595,190,630,220,3);
f1(0,220,35,250,6);
f1(35,220,70,250,4);
f1(70,220,105,250,14);
f1(105,220,140,250,14);
f1(140,220,175,250,14);
f1(175,220,210,250,14);
f1(210,220,245,250,14);
f1(245,220,280,250,14);
f1(280,220,315,250,14);
f1(315,220,350,250,14);
f1(350,220,385,250,14);
f1(385,220,420,250,14);
f1(420,220,455,250,2);
f1(455,220,490,250,2);
f1(490,220,525,250,10);
f1(525,220,560,250,10);
f1(560,220,595,250,9);
f1(595,220,630,250,3);
f1(0,250,35,280,6);
f1(35,250,70,280,4);
f1(105,380,140,410,1);
f1(140,380,175,410,1);
f1(175,380,210,410,1);
f1(210,380,245,410,1);
f1(245,380,280,410,1);
f1(280,380,315,410,1);
f1(315,380,350,410,1);
f1(350,380,385,410,1);
f1(385,380,420,410,1);
f1(420,380,455,410,1);
f1(455,380,490,410,1);
f1(490,380,525,410,1);
f1(525,380,560,410,1);
f1(560,380,595,410,1);
f1(595,380,630,410,1);
f1(105,250,140,280,14);
f1(140,250,175,280,14);
f1(175,250,210,280,14);
f1(210,250,245,280,14);
f1(245,250,280,280,14);
f1(280,250,315,280,14);
f1(315,250,350,280,14);
f1(350,250,385,280,14);
f1(385,250,420,280,14);
f1(420,250,455,280,2);
f1(455,250,490,280,2);
f1(490,250,525,280,2);
f1(525,250,560,280,10);
f1(560,250,595,280,9);
f1(595,250,630,310,3);
f1(0,280,35,310,6);
f1(35,280,70,310,4);
f1(105,410,140,440,5);
f1(140,410,175,440,5);
f1(175,410,210,440,5);
f1(210,410,245,440,5);
f1(245,410,280,440,5);
f1(280,410,315,440,5);
f1(315,410,350,440,5);
f1(350,410,385,440,5);
f1(385,410,420,440,5);
f1(420,410,455,440,5);
f1(455,410,490,440,5);
f1(490,410,525,440,5);
f1(525,410,560,440,5);
f1(560,410,595,440,5);
f1(595,410,630,440,5);
f1(105,280,140,310,14);
f1(140,280,175,310,14);
f1(175,280,210,310,14);
f1(210,280,245,310,14);
f1(245,280,280,310,14);
f1(280,280,315,310,14);
f1(315,280,350,310,14);
f1(350,280,385,310,14);
f1(385,280,420,310,14);
f1(420,280,455,310,2);
f1(455,280,490,310,2);
f1(490,280,525,310,2);
f1(525,280,560,310,2);
f1(560,280,595,310,9);
f1(595,280,630,310,3);


   //elements name
setcolor(BLACK);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(10,105,"1 ");
outtextxy(10,120,"H");

outtextxy(10,135,"3 ");
outtextxy(10,150,"Li");

outtextxy(10,165,"11 ");
outtextxy(10,180,"Na");

outtextxy(10,195,"19 ");
outtextxy(10,210,"K");

outtextxy(10,225,"37 ");
outtextxy(10,240,"Rb");

outtextxy(10,255,"55 ");
outtextxy(10,270,"Cs");

outtextxy(10,285,"87 ");
outtextxy(10,300,"Fr");

outtextxy(45,135,"4 ");
outtextxy(45,150,"Be");

outtextxy(45,165,"12 ");
outtextxy(45,180,"Mg");

outtextxy(45,195,"20 ");
outtextxy(45,210,"Ca");

outtextxy(45,225,"38 ");
outtextxy(45,240,"Sr");

outtextxy(45,255,"56 ");
outtextxy(45,270,"Ba");

outtextxy(45,285,"88 ");
outtextxy(45,300,"Ra");

outtextxy(80,195,"21 ");
outtextxy(80,210,"Sc");

outtextxy(80,225,"39 ");
outtextxy(80,240,"Y");


outtextxy(115,195,"22 ");
outtextxy(115,210,"Ti");

outtextxy(115,225,"40 ");
outtextxy(115,240,"Zr");

outtextxy(115,255,"72 ");
outtextxy(115,270,"Hf" );

outtextxy(110,285,"104 ");
outtextxy(115,300,"Rf");

outtextxy(150,195,"23 ");
outtextxy(150,210,"V");

outtextxy(150,225,"41 ");
outtextxy(150,240,"Nb");

outtextxy(150,255,"73 ");
outtextxy(150,270,"Ta" );

outtextxy(145,285,"105 ");
outtextxy(150,300,"Db");

outtextxy(185,195,"24 ");
outtextxy(185,210,"Cr");

outtextxy(185,225,"42 ");
outtextxy(185,240,"Mo");

outtextxy(185,255,"74 ");
outtextxy(185,270,"W" );

outtextxy(180,285,"106 ");
outtextxy(185,300,"Sg");

outtextxy(220,195,"25 ");
outtextxy(220,210,"Mn");

outtextxy(220,225,"43 ");
outtextxy(220,240,"Tc");

outtextxy(220,255,"75 ");
outtextxy(220,270,"Re" );

outtextxy(215,285,"107 ");
outtextxy(220,300,"Bh");

outtextxy(255,195,"26 ");
outtextxy(255,210,"Fe");

outtextxy(255,225,"44 ");
outtextxy(255,240,"Ru");

outtextxy(255,255,"76 ");
outtextxy(255,270,"Os" );

outtextxy(250,285,"108 ");
outtextxy(255,300,"Hs");

outtextxy(290,195,"27 ");
outtextxy(290,210,"Co");

outtextxy(290,225,"45 ");
outtextxy(290,240,"Rh");

outtextxy(290,255,"77 ");
outtextxy(290,270,"Ir" );

outtextxy(285,285,"109 ");
outtextxy(290,300,"Mt");

outtextxy(325,195,"28 ");
outtextxy(325,210,"Ni");

outtextxy(325,225,"46 ");
outtextxy(325,240,"Pd");

outtextxy(325,255,"78 ");
outtextxy(325,270,"Pt" );

outtextxy(320,285,"110 ");
outtextxy(325,300,"Ds");

outtextxy(360,195,"29 ");
outtextxy(360,210,"Cu");

outtextxy(360,225,"47 ");
outtextxy(360,240,"Ag");

outtextxy(360,255,"79 ");
outtextxy(360,270,"Au" );

outtextxy(355,285,"111 ");
outtextxy(360,300,"Rg");

outtextxy(395,195,"30 ");
outtextxy(395,210,"Zn");

outtextxy(395,225,"48 ");
outtextxy(395,240,"Cd");

outtextxy(395,255,"80 ");
outtextxy(395,270,"Hg" );

outtextxy(390,285,"112 ");
outtextxy(395,300,"Cn");

outtextxy(435,135,"5 ");
outtextxy(435,150,"B");

outtextxy(430,165,"13 ");
outtextxy(430,180,"Al");

outtextxy(430,195,"31 ");
outtextxy(430,210,"Ga");

outtextxy(430,225,"49 ");
outtextxy(430,240,"In");

outtextxy(430,255,"81 ");
outtextxy(430,270,"Tl" );

outtextxy(425,285,"113 ");
outtextxy(425,300,"Uut");

outtextxy(465,135,"6 ");
outtextxy(465,150,"C");

outtextxy(465,165,"14 ");
outtextxy(465,180,"Si");

outtextxy(465,195,"32 ");
outtextxy(465,210,"Ge");

outtextxy(465,225,"50 ");
outtextxy(465,240,"Sn");

outtextxy(465,255,"82 ");
outtextxy(460,270,"Pb" );

outtextxy(460,285,"114 ");
outtextxy(460,300,"Fl");

outtextxy(500,135,"7 ");
outtextxy(500,150,"N");

outtextxy(500,165,"15 ");
outtextxy(505,180,"P");

outtextxy(500,195,"33 ");
outtextxy(500,210,"As");

outtextxy(500,225,"51 ");
outtextxy(500,240,"Sb");

outtextxy(500,255,"83 ");
outtextxy(500,270,"Bi" );

outtextxy(495,285,"115 ");
outtextxy(495,300,"Uup");

outtextxy(535,135,"8 ");
outtextxy(540,150,"O");

outtextxy(535,165,"16 ");
outtextxy(540,180,"S");

outtextxy(535,195,"34 ");
outtextxy(535,210,"Se");

outtextxy(535,225,"52 ");
outtextxy(535,240,"Te");

outtextxy(535,255,"84 ");
outtextxy(535,270,"Po" );

outtextxy(530,285,"116 ");
outtextxy(535,300,"Lv");

outtextxy(570,135,"9 ");
outtextxy(575,150,"F");

outtextxy(570,165,"17 ");
outtextxy(570,180,"Cl");

outtextxy(570,195,"35 ");
outtextxy(570,210,"Br");

outtextxy(570,225,"53 ");
outtextxy(575,240,"I");

outtextxy(570,255,"85 ");
outtextxy(570,270,"At" );

outtextxy(565,285,"117 ");
outtextxy(565,300,"Uus");

outtextxy(605,105,"2 ");
outtextxy(605,120,"He");

outtextxy(605,135,"10 ");
outtextxy(605,150,"Ne");

outtextxy(605,165,"18 ");
outtextxy(605,180,"Ar");

outtextxy(605,195,"36 ");
outtextxy(605,210,"Kr");

outtextxy(605,225,"54 ");
outtextxy(605,240,"Xe");

outtextxy(605,255,"86 ");
outtextxy(605,270,"Rn" );

outtextxy(600,285,"118 ");
outtextxy(600,300,"Uuo");
//elements of lenthenoids and actenoids
outtextxy(115,385,"57 ");
outtextxy(115,400,"La ");

outtextxy(115,415,"89 ");
outtextxy(115,430,"Ac");

outtextxy(150,385,"58 ");
outtextxy(150,400,"Ce");

outtextxy(150,415,"90 ");
outtextxy(150,430,"Th");

outtextxy(185,385,"59 ");
outtextxy(185,400,"Pr");

outtextxy(185,415,"91 ");
outtextxy(185,430,"Pa");

outtextxy(220,385,"60 ");
outtextxy(220,400,"Nd");

outtextxy(220,415,"92 ");
outtextxy(225,430,"U");

outtextxy(255,385,"61 ");
outtextxy(255,400,"Pm");

outtextxy(255,415,"93 ");
outtextxy(255,430,"Np");

outtextxy(290,385,"62 ");
outtextxy(290,400,"Sm");

outtextxy(290,415,"94 ");
outtextxy(290,430,"Pu");

outtextxy(325,385,"63 ");
outtextxy(325,400,"Eu");

outtextxy(325,415,"95 ");
outtextxy(325,430,"Am");

outtextxy(360,385,"64 ");
outtextxy(360,400,"Gd");

outtextxy(360,415,"96 ");
outtextxy(360,430,"Cm");

outtextxy(395,385,"65 ");
outtextxy(395,400,"Tb");

outtextxy(395,415,"97 ");
outtextxy(395,430,"Bk");

outtextxy(430,385,"66 ");
outtextxy(430,400,"Dy");

outtextxy(430,415,"98 ");
outtextxy(430,430,"Cf");

outtextxy(465,385,"67 ");
outtextxy(465,400,"Ho");

outtextxy(465,415,"99 ");
outtextxy(465,430,"Es");

outtextxy(500,385,"68 ");
outtextxy(500,400,"Er");

outtextxy(495,415,"100 ");
outtextxy(500,430,"Fm");

outtextxy(535,385,"69 ");
outtextxy(535,400,"Tm");

outtextxy(530,415,"101 ");
outtextxy(535,430,"Md");

outtextxy(570,385,"70 ");
outtextxy(570,400,"Yb");

outtextxy(565,415,"102 ");
outtextxy(570,430,"No");

outtextxy(605,385,"71 ");
outtextxy(605,400,"Lu");

outtextxy(600,415,"103 ");
outtextxy(605,430,"Lr");
setcolor(WHITE);
line(0,330,630,330);
outtextxy(0,327,"<");
outtextxy(67,327,">");
outtextxy(10,320,"s-block");
outtextxy(73,327,"<");
outtextxy(417,327,">");
outtextxy(250,320,"d-block");
outtextxy(423,327,"<");
outtextxy(628,327,">");
outtextxy(525,320,"p-block");

line(105,370,630,370);
outtextxy(105,367,"<");
outtextxy(628,367,">");
outtextxy(310,360,"f-block");
outtextxy(4,10,"Back");

}

