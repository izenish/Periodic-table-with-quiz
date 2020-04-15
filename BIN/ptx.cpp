#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<fstream.h>
 
  class periodic
{
private:
  int i,j,k,a,c;
public:
  void showtable();
  void getdata();
  void putdata();
  void endscreen();
};
 
void periodic::showtable()
{
cleardevice();
setcolor(5);
settextstyle(3,0,7);
for(k=1;k<=90;k++)
{
cleardevice();
outtextxy(125,k,"WELCOME TO");
delay(60);
}
settextstyle(3,0,5);
outtextxy(80,250,"MODERN PERIODIC-TABLE");
setcolor(14);
outtextxy(75,300,"*************************");
outtextxy(124,150,"********************");
delay(50);
for(i=6;i<=500;i=i+30)
{
for(j=0;j<=10;j++)
{
setcolor (i+j);
circle(35,i,j+20);
circle(605,i,j+20);
delay(35);
 }
}
for(i=5;i<=630;i=i+10)
{
for(j=0;j<=5;j=j+1)
{
setcolor(j);
circle(i,460,j+15);
circle(i,460,j+1);
circle(i,20,j+15);
circle(i,20,j+1);
delay(10);
 }
}
cleardevice();
for(i=0;i<=1100;i++)
{
settextstyle(3,1,1);
putpixel(rand()%720,rand()%500,rand());
delay(5);
}
for(i=0;i<=40;i++)
{
setcolor(i);
circle(65,40,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(65,140,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(65,240,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(65,340,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(65,440,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(165,440,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(265,440,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(365,440,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(465,440,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(565,440,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(565,340,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(565,240,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(565,140,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(565,40,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(465,40,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(365,40,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(265,40,i);
delay(10);
}
for( i=0;i<=40;i++)
{
setcolor(i);
circle(165,40,i);
delay(10);
}
settextstyle(1,0,3);
setcolor(11);
outtextxy(260,100,"MADE BY :-");
setcolor(14);
outtextxy(250,130,"********************");
settextstyle(7,0,4);
setcolor(10);
outtextxy(100,160,"*** RATNESH MISHRA ***");
outtextxy(300,210,"&");
outtextxy(100,260,"*** MUDIT SHARMA ***");
outtextxy(300,310,"&");
outtextxy(100,360,"*** SAHIB NOOR SINGH ***");
delay(7000);
cleardevice();
line(0,30,30,30);
line(30,30,30,275);
line(0,135,625,135);
line(65,65,65,275);
line(100,135,100,275);
line(135,135,135,275);
line(170,135,170,275);
line(205,135,205,275);
line(240,135,240,275);
line(275,135,275,275);
line(310,135,310,275);
line(345,135,345,275);
line(380,135,380,275);
line(415,65,415,275);
line(450,65,450,275);
line(485,65,485,275);
line(520,65,520,275);
line(555,65,555,275);
line(590,30,590,275);
line(625,30,625,275);
line(0,30,0,275);
line(0,170,625,170);
line(0,205,625,205);
line(0,240,625,240);
line(0,275,625,275);
line(0,65,65,65);
line(0,100,65,100);
line(415,65,625,65);
line(415,100,625,100);
line(590,30,625,30);
line(590,30,625,30);
line(135,420,625,420);
line(135,350,135,420);
line(135,350,625,350);
line(135,385,625,385);
line(170,350,170,420);
line(205,350,205,420);
line(240,350,240,420);
line(275,350,275,420);
line(310,350,310,420);
line(345,350,345,420);
line(380,350,380,420);
line(415,350,415,420);
line(450,350,450,420);
line(485,350,485,420);
line(520,350,520,420);
line(555,350,555,420);
line(590,350,590,420);
line(625,350,625,420);
setcolor(5);
settextstyle(0,0,0);
outtextxy(10,50,"H");
outtextxy(10,85,"Li");
outtextxy(10,120,"Na");
outtextxy(10,155,"k");
outtextxy(10,190,"Rb");
outtextxy(10,225,"Cs");
outtextxy(10,260,"Fr");
outtextxy(40,85,"Be");
outtextxy(40,120,"Mg");
outtextxy(40,155,"Ca");
outtextxy(40,190,"Sr");
outtextxy(40,225,"Ba");
outtextxy(40,260,"Ra");
setcolor(14);
outtextxy(75,155,"Sc");
outtextxy(75,190,"Y");
outtextxy(75,225,"La");
outtextxy(75,260,"Ac");
outtextxy(110,155,"Ti");
outtextxy(110,190,"Zr");
outtextxy(110,225,"Hf");
outtextxy(110,260,"Rf");
outtextxy(145,155,"V");
outtextxy(145,190,"Nb");
outtextxy(145,225,"Ta");
outtextxy(145,260,"Db");
outtextxy(180,155,"Cr");
outtextxy(180,190,"Mo");
outtextxy(180,225,"W");
outtextxy(180,260,"Sg");
outtextxy(215,155,"Mn");
outtextxy(215,190,"Tc");
outtextxy(215,225,"Re");
outtextxy(215,260,"Bh");
outtextxy(250,155,"Fe");
outtextxy(250,190,"Ru");
outtextxy(250,225,"Os");
outtextxy(250,260,"Hs");
outtextxy(285,155,"Co");
outtextxy(285,190,"Rh");
outtextxy(285,225,"Ir");
outtextxy(285,260,"Mt");
outtextxy(320,155,"Ni");
outtextxy(320,190,"Pd");
outtextxy(320,225,"Pt");
outtextxy(315,260,"Uun");
outtextxy(355,155,"Cu");
outtextxy(355,190,"Ag");
outtextxy(355,225,"Au");
outtextxy(350,260,"Uuu");
outtextxy(390,155,"Zn");
outtextxy(390,190,"Cd");
outtextxy(390,225,"Hg");
outtextxy(385,260,"Uub");
setcolor(9);
outtextxy(425,155,"Ga");
outtextxy(425,190,"In");
outtextxy(425,225,"Ti");
outtextxy(420,260,"Uut");
outtextxy(425,120,"Al");
setcolor(6);
outtextxy(425,85,"B");
setcolor(9);
outtextxy(460,85,"C");
setcolor(6);
outtextxy(460,120,"Si");
outtextxy(460,155,"Ge");
setcolor(9);
outtextxy(460,190,"Sn");
outtextxy(460,225,"Pb");
outtextxy(455,260,"Uuq");
outtextxy(495,85,"N");
outtextxy(495,120,"P");
setcolor(6);
outtextxy(495,155,"As");
outtextxy(495,190,"Sb");
setcolor(9);
outtextxy(495,225,"Bi");
outtextxy(490,260,"Uup");
outtextxy(530,85,"O");
outtextxy(530,120,"S");
outtextxy(530,155,"Se");
setcolor(6);
outtextxy(530,190,"Te");
outtextxy(530,225,"Po");
setcolor(9);
outtextxy(525,260,"Uuh");
outtextxy(565,85,"F");
outtextxy(565,120,"Cl");
outtextxy(565,155,"Br");
outtextxy(565,190,"I");
setcolor(6);
outtextxy(565,225,"At");
outtextxy(560,260,"Uus");
setcolor(4);
outtextxy(600,50,"He");
outtextxy(600,85,"Ne");
outtextxy(600,120,"Ar");
outtextxy(600,155,"Kr");
outtextxy(600,190,"Xe");
outtextxy(600,225,"Rn");
outtextxy(600,260,"Uuo");
setcolor(12);
settextstyle(0,0,2);
outtextxy(165,15,"PERIODIC TABLE");
outtextxy(163,18,"______________");
settextstyle(0,0,0);
setcolor(8);
outtextxy(145,375,"Ce");
outtextxy(145,410,"Th");
outtextxy(180,375,"Pr");
outtextxy(180,410,"Pa");
outtextxy(215,375,"Nd");
outtextxy(215,410,"U");
outtextxy(250,375,"Pm");
outtextxy(250,410,"Np");
outtextxy(285,375,"Sm");
outtextxy(285,410,"Pu");
outtextxy(320,375,"Eu");
outtextxy(320,410,"Am");
outtextxy(355,375,"Gd");
outtextxy(355,410,"Cm");
outtextxy(390,375,"Tb");
outtextxy(390,410,"Bk");
outtextxy(425,375,"Dy");
outtextxy(425,410,"Cf");
outtextxy(460,375,"Ho");
outtextxy(460,410,"Es");
outtextxy(495,375,"Er");
outtextxy(495,410,"Fm");
outtextxy(530,375,"Tm");
outtextxy(530,410,"Md");
outtextxy(565,375,"Yb");
outtextxy(565,410,"No");
outtextxy(600,375,"Lu");
outtextxy(600,410,"Lr");
setcolor(10);
outtextxy(20,365,"Lanthanides--");
outtextxy(20,400,"Actinides----");
outtextxy(135,330,"|----------------------f-block Elements----------------------|");
outtextxy(65,120,"|-------------d-block Elements-------------|");
outtextxy(412,15,"|-----p-block Elements----|");
outtextxy(0,15,"|--------|");
outtextxy(0,0,"s-blocks Elements");
outtextxy(10,35,"1");
outtextxy(10,70,"3");
outtextxy(10,105,"11");
outtextxy(10,140,"19");
outtextxy(10,175,"37");
outtextxy(10,210,"55");
outtextxy(10,245,"87");
outtextxy(40,70,"4");
outtextxy(40,105,"12");
outtextxy(40,140,"20");
outtextxy(40,175,"38");
outtextxy(40,210,"56");
outtextxy(40,245,"88");
setcolor(6);
outtextxy(75,140,"21");
outtextxy(75,175,"39");
outtextxy(75,210,"57");
outtextxy(75,245,"89");
outtextxy(110,140,"22");
outtextxy(110,175,"40");
outtextxy(110,210,"72");
outtextxy(110,245,"104");
outtextxy(145,140,"23");
outtextxy(145,175,"41");
outtextxy(145,210,"73");
outtextxy(145,245,"105");
outtextxy(180,140,"24");
outtextxy(180,175,"42");
outtextxy(180,210,"74");
outtextxy(180,245,"106");
outtextxy(215,140,"25");
outtextxy(215,175,"43");
outtextxy(215,210,"75");
outtextxy(215,245,"107");
outtextxy(250,140,"26");
outtextxy(250,175,"44");
outtextxy(250,210,"76");
outtextxy(250,245,"108");
outtextxy(285,140,"27");
outtextxy(285,175,"45");
outtextxy(285,210,"77");
outtextxy(285,245,"109");
outtextxy(320,140,"28");
outtextxy(320,175,"46");
outtextxy(320,210,"78");
outtextxy(315,245,"110");
outtextxy(355,140,"29");
outtextxy(355,175,"47");
outtextxy(355,210,"79");
outtextxy(350,245,"111");
outtextxy(390,140,"30");
outtextxy(390,175,"46");
outtextxy(390,210,"80");
outtextxy(385,245,"112");
setcolor(7);
outtextxy(425,140,"31");
outtextxy(425,175,"49");
outtextxy(425,210,"81");
outtextxy(420,245,"113");
outtextxy(425,105,"13");
setcolor(6);
outtextxy(425,70,"5");
setcolor(5);
outtextxy(460,70,"6");
setcolor(9);
outtextxy(460,105,"14");
outtextxy(460,140,"32");
setcolor(4);
outtextxy(460,175,"50");
outtextxy(460,210,"82");
outtextxy(455,245,"114");
outtextxy(495,70,"7");
outtextxy(495,105,"15");
setcolor(5);
outtextxy(495,140,"33");
outtextxy(495,175,"51");
setcolor(7);
outtextxy(495,210,"83");
outtextxy(490,245,"115");
outtextxy(530,70,"8");
outtextxy(530,105,"16");
outtextxy(530,140,"34");
setcolor(2);
outtextxy(530,175,"52");
outtextxy(530,210,"84");
setcolor(1);
outtextxy(525,245,"116");
outtextxy(565,70,"9");
outtextxy(565,105,"17");
outtextxy(565,140,"35");
outtextxy(565,175,"53");
setcolor(9);
outtextxy(565,210,"85");
outtextxy(560,245,"117");
setcolor(6);
outtextxy(600,35,"2");
outtextxy(600,70,"10");
outtextxy(600,105,"18");
outtextxy(600,140,"36");
outtextxy(600,175,"54");
outtextxy(600,210,"86");
outtextxy(600,245,"118");
setcolor(7);
outtextxy(145,360,"58");
outtextxy(145,395,"90");
outtextxy(180,360,"59");
outtextxy(180,395,"91");
outtextxy(215,360,"60");
outtextxy(215,395,"92");
outtextxy(250,360,"61");
outtextxy(250,395,"93");
outtextxy(285,360,"62");
outtextxy(285,395,"94");
outtextxy(320,360,"63");
outtextxy(320,395,"95");
outtextxy(355,360,"64");
outtextxy(355,395,"96");
outtextxy(390,360,"65");
outtextxy(390,395,"97");
outtextxy(425,360,"66");
outtextxy(425,395,"98");
outtextxy(460,360,"67");
outtextxy(460,395,"99");
outtextxy(495,360,"68");
outtextxy(495,395,"100");
outtextxy(530,360,"69");
outtextxy(530,395,"101");
outtextxy(565,360,"70");
outtextxy(565,395,"102");
outtextxy(600,360,"71");
outtextxy(600,395,"103");
setcolor(3);
for(i=0;i<=1100;i++)
{
settextstyle(3,1,1);
putpixel(rand()%720,rand()%500,rand());
delay(10);
 }
}
 
void periodic::getdata()
{
cleardevice();
setbkcolor(5);
cout<<"Enter the atomic no.";
cin>>c;
}
 
void periodic::putdata()
{
setcolor(15);
if(c==1)
cout<<"Hydrogen:-"<<" "
<<" "<<"1.)It is a colourless,odourless and tasteless gas."
<<" "<<"2.)It is the lightest gas known."
<<" "<<"3.)It is only very slightly soluble in water."
<<" "<<"4.)It can be liquefied under high pressure and at low temperature."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"-----*-----*-----*-----";
else
if(c==2)
cout<<"Helium:-"<<" "
<<" "<<"1.)It is a colourless,odourless and tasteless gas."
<<" "<<"2.)It is the lightest gas known."
<<" "<<"3.)It is used for providing an inert atmosphere."
<<" "<<"4.)It is non-inflammable."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==3)
cout<<"Lithium:-"<<" "<<" "<<"1.)Lithium is a silvery white metal."
<<" "<<"2.)It is quite soft."
<<" "<<"3.)Lithium imparts crimson red colour to the flame."
<<" "<<"4.)It is one of the strongest reducing agent."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==4)
cout<<"Beryllium:-"<<" "<<" "<<"1.)Beryllium is very hard in nature."
<<" "<<"2.)It is used as a scavanger in metallurgy."
<<" "<<"3.)It is used in X-Ray window."
<<" "<<"4.)It is used for making electrodes of neon signs."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==5)
cout<<"Boron:-"<<" "<<" "<<"1.)Boron exist in three allotropic forms."
<<" "<<"2.)Boron is a poor conductor of electricity."
<<" "<<"3.)Boron is quite inert towards water."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==6)
cout<<"Carbon:-"<<" "<<" "<<"1.)It is a non-metallic element."
<<" "<<"2.)It occurs both in free as well as combined state."
<<" "<<"3.)Air also contain carbon as carbon-di-oxide."
<<" "<<"4.)In free state it occurs as diamond,coal and graphite."
<<" "<<"5.)Carbon forms hydrites known as hydrocarbon."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==7)
cout<<"Nitrogen:-"<<" "<<" "<<"1.)It is a typical non-metal."
<<" "<<"2.)It exists as diatomic molecule."
<<" "<<"3.)It is highly electronegative element."
<<" "<<"4.)The oxidation state of nitrogen varies from -3 to +5."
<<" "<<"5.)Molecular nitrogen is called dinitrogen."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==8)
cout<<"Oxygen:-"<<" "<<" "<<"1.)It is a non-metal."
<<" "<<"2.)It is paramagnatic in nature."
<<" "<<"3.)It is most abundant element in earth's crust."
<<" "<<"4.)It is di-atomic in nature."
<<" "<<"5.)Molecular oxygen is also called dioxygen."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==9)
cout<<"Fluorine:-"<<" "<<" "<<"1.)It is a non-metallic element."
<<" "<<"2.)It is most electronegative in nature."
<<" "<<"3.)It is used in the preparation of uranium hexafluoride."
<<" "<<"4.)In nature it is not found in free state."
<<" "<<"5.)It is used as plastic teflon."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==10)
cout<<"Neon:-"<<" "<<" "<<"1.)It is a gas."
<<" "<<"2.)It is widely used in sign boards."
<<" "<<"3.)It is used in T.V.,radio,photography and warning signals."
<<" "<<"4.)It produces an orange glow when an electric current is passed."
<<" "<<"5.)Neon lights are used as beacon lights for pilots."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==11)
cout<<"Sodium:-"<<" "<<" "<<"1.)It occurs only in the combined form."
<<" "<<"2.)NaCl,common salt found as rock salt, in sea water."
<<" "<<"3.)Sodium nitrate as chili saltpetre or Caliche in Chile."
<<" "<<"4.)Sodium carbonate is found as an efflorescent substance."
<<" "<<"5.)Sodium is extracted by electrolysis of fused caustic soda."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==12)
cout<<"Magnesium:-"<<" "<<" "<<"1.)It is used in manufacture of alloys."
<<" "<<"2.)It is extracted by reduction of MgO."
<<" "<<"3.)It is used as a reducing agent for boron and silicon."
<<" "<<"4.)It is used as a de-oxidiser in metallurgy."
<<" "<<"5.)It is used as a fuse in alumino-thermite process."
<<" "<<"6.)It is used in flash light photography and in fire-works."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==13)
cout<<"Aluminium:-"<<" "<<" "<<"1.)It is a reactive metal."
<<" "<<"2.)It exists in combined state."
<<" "<<"3.)It is present in earth's crust & its relative abundance is 8.3."
<<" "<<"4.)Aluminium is extracted from its ore bauxite."
<<" "<<"5.)It is not effected by atmosphere & do not decompose water."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==14)
cout<<"Silicon:-"<<" "<<" "<<"1.)Silicon is very abundant element."
<<" "<<"2.)It is present in earth's crust to the extexnt of 28%."
<<" "<<"3.)It is present in the form of silica."
<<" "<<"4.)It is used in semi-conductor."
<<" "<<"5.)It exists in two allotropic forms i.e. amorphous and crystalline."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==15)
cout<<"Phosphorus:-"<<" "<<" "<<"1.)It is a reactive non-metal."
<<" "<<"2.)It is the tenth element in the order of abundance in earth crust."
<<" "<<"3.)It exists in combined form."
<<" "<<"4.)It constitutes our bones,teeth,muscles,brain & nerve tissue."
<<" "<<"5.)In the form of phospholipids it is present in milk,egg,fish,etc."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==16)
cout<<"Sulphur:-"<<" "<<" "<<"1.)It is present in small proportion."
<<" "<<"2.)It is used as disinfectant for destroying bacteria,fungi."
<<" "<<"3.)It is used in vulcanisation of rubber."
<<" "<<"4.)It is a constituent of medicines for skin diseases."
<<" "<<"5.)It is used in manufacture of matches,fire-works,etc."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==17)
cout<<"Chlorine:-"<<" "<<" "<<"1.)It is a non-metallic element."
<<" "<<"2.)It is used in bleaching textile,yarn,paper,pulp."
<<" "<<"3.)It is used in the sterilization of drinking water."
<<" "<<"4.)It is used in the manufacture of vinyl chloride."
<<" "<<"5.)It is used in preparing insecticides such as D.D.T. & B.H.C."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==18)
cout<<"Argon:-"<<" "<<" "<<"1.)It is a noble-gas."
<<" "<<"2.)It is found in traces in the certain spring water."
<<" "<<"3.)It is used in metal filament electric lamps."
<<" "<<"4.)It is used in thermionic tubes."
<<" "<<"5.)It is used for creating inert atmosphere."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==19)
cout<<"Potassium:-"<<" "<<" "<<"1.)It occurs in combined form."
<<" "<<"2.)Potassium carbonate is a constituent of wood ashes."
<<" "<<"3.)It is prepared by electrolysis of fused potassium cyanide."
<<" "<<"4.)It is a silvery white metal."
<<" "<<"5.)It is lighter & softer than sodium."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==20)
cout<<"Calcium:-"<<" "<<" "<<"1.)It forms bivalent ions."
<<" "<<"2.)It imparts brick red colour to flame."
<<" "<<"3.)It's melting point & boiling point is 1112K & 1767K."
<<" "<<"4.)It's electronegativity is 1."
<<" "<<"5.)Its first & second ionisation energies are 590 & 1146KJ/mol."
<<" "<<"6.)It's density is 1.05g/c.c ."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==21)
cout<<"Scandium:-"<<" "<<" "<<"1.)It's atomic radius is 144 p.m."
<<" "<<"2.)It exhibits +2 & +3 oxidation states. "
<<" "<<"3.)Colour of it's ion is white."
<<" "<<"4.)It's ionisation energy is 631KJ/mol."
<<" "<<"5.)It is the first element of d-block element."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==22)
cout<<"Titanium:-"<<" "<<" "<<"1.)Its atomic radii is 132pm."
<<" "<<"2.)It contains two unpaired electrons."
<<" "<<"3.)It exhibits +2 & +3 oxidation states."
<<" "<<"4.)It's ionisation energy is 656 KJ/mol."
<<" "<<"5.)It is used to extract pure metals."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==23)
cout<<"Vanadium:-"<<" "<<" "<<"1.)It's magnatic moment is 2.76 B.M."
<<" "<<"2.)It exhibits stable +5 oxidation state."
<<" "<<"3.)It forms green & white ions."
<<" "<<"4.)It's value of electrode potential is -1.20 V."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==24)
cout<<"Chromium:-"<<" "<<" "<<"1.)It's magnetic moment is 3.86 B.M."
<<" "<<"2.)It is used in making of alloys & in plating of metals."
<<" "<<"3.)Dichromate ion is used as volumetric reagent."
<<" "<<"4.)It has maximum no. of unpaired electrons."
<<" "<<"5.)It forms basic & amphoteric oxides."
<<" "<<"6.)It's heat of sublimation is 318 KJ/mol."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==25)
cout<<"Manganese:-"<<" "<<" "<<"1.)It has abnormally low melting point."
<<" "<<"2.)It's important ores are pyrolusite and braunite."
<<" "<<"3.)It is used to manufacture steel, rail lines etc."
<<" "<<"4.)It is used in making manganese bronze used in parts of ships."
<<" "<<"5.)It is the 14th most abundant element in the earth's crust."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==26)
cout<<"Iron:-"<<" "<<" "<<"1.)It is used in formation of various alloys."
<<" "<<"2.)It exhibits +2 & +3 oxidation states."
<<" "<<"3.)It forms various non-stoichiometric oxides."
<<" "<<"4.)It's electrode potential is -0.44 V."
<<" "<<"5.)It is used as catalyst in many processes."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==27)
cout<<"Cobalt:-"<<" "<<" "<<"1.)It forms pink coloured ions."
<<" "<<"2.)Cobalt salts catalyse the decomposition of bleaching powder."
<<" "<<"3.)It forms the basic oxide CaO."
<<" "<<"4.)It is known as a ferrous metal."
<<" "<<"5.)It's ionisation energy is 758 KJ/mol."
<<" "<<"6.)It forms various complexes."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==28)
cout<<"Nickel:-"<<" "<<" "<<"1.)It forms green coloured ions."
<<" "<<"2.)It exhibits +2,+3,+4 oxidation states."
<<" "<<"3.)It is used in hydrogenation reaction in organic chemistry."
<<" "<<"4.)It's heat of sublimation is 397 KJ/mol."
<<" "<<"5.)It has atomic radii of 115pm."
<<" "<<"6.)It's ionisation energy is 736 KJ/mol."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==29)
cout<<"Copper:-"<<" "<<" "<<"1.)It is a dimagnetic substance."
<<" "<<"2.)It occurs in free as well as in combined form."
<<" "<<"3.)It is used in making copper wires and electrical goods."
<<" "<<"4.)It exhibits +1 and +2 oxidation state."
<<" "<<"5.)It has an electrode potential of -0.34 V."
<<" "<<"6.)It forms blue and white coloured ions."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==30)
cout<<"Zinc:-"<<" "<<" "<<"1.)Zinc blend is usually the main ore."
<<" "<<"2.)Zinc is a metal."
<<" "<<"3.)Zinc is a moderately hard,brittle element."
<<" "<<"4.)Zinc is a d-block element."
<<" "<<"5.)It's magnetic moment is 0."
<<" "<<"6.)It is used to galvanize iron."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==31)
cout<<"Gallium:-"<<" "<<" "<<"1.)It is a shining greyish white metal."
<<" "<<"2.)it has a density of 5.9 in solid and 6.095 in liquid state."
<<" "<<"3.)It has a very low melting point of 30^C."
<<" "<<"4.)It is a very rare element."
<<" "<<"5.)It is a element of p-block."
<<" "<<"6.)It's atomic radii is 135pm."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==32)
cout<<"Germanium:-"<<" "<<" "<<"1.)It's atomic radius is 122 pm ."
<<" "<<"2.)It's bond energy is 167.2 KJ/mol."
<<" "<<"3.)It is used as semi-conductor."
<<" "<<"4.)It has bond gap of 0.7eV."
<<" "<<"5.)It's electronegativity is 1.8."
<<" "<<"6.)It's melting and boiling points are 1218K and 3123K."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==33)
cout<<"Arsenic:-"<<" "<<" "<<"1.)It is an element of p-block."
<<" "<<"2.)It exists in yellow and grey colour."
<<" "<<"3.)It's electronegativity is 2."
<<" "<<"4.)It is a highly poisonous substance."
<<" "<<"5.)It is one of a banned element in school labs."
<<" "<<"6.)It's density is 50.78g/c.c."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==34)
cout<<"Selenium:-"<<" "<<" "<<"1.)It is an element of p-block."
<<" "<<"2.)It's atomic radius is 116pm."
<<" "<<"3.)It's density in solid state is 4.79g/c.c."
<<" "<<"4.)It finds use in fire proofing electrical fittings."
<<" "<<"5.)It finds use in medicine."
<<" "<<"6.)It forms various hallides."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==35)
cout<<"Bromine:-"<<" "<<" "<<"1.)It's atomic radius is 101.4pm."
<<" "<<"2.)It's ionisation energy is 1142 KJ/mol."
<<" "<<"3.)It is reddish brown in colour."
<<" "<<"4.)It makes bromo compounds in organic chemistry."
<<" "<<"5.)It finds use in medicine."
<<" "<<"6.)It is a liquid with obnoxious smell"
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==36)
cout<<"Krypton:-"<<" "<<" "<<"1.)It is a noble gas."
<<" "<<"2.)It is attached by weak Van der wall forces."
<<" "<<"3.)It does not exist as adiatomic molecule."
<<" "<<"4.)It is a by products in nuclear reactors."
<<" "<<"5.)It is a gas with suffocating smell."
<<" "<<"6.)It is a colourless,tasteless and odourless gas."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==37)
cout<<"Rubidium:-"<<" "<<" "<<"1.)It catches fire spontaneously in air."
<<" "<<"2.)It boils at 696K giving bluish vapours."
<<" "<<"3.)It is a silvery white metal which melts at 311K."
<<" "<<"4.)It forms complex salts with halogens."
<<" "<<"5.)It gives a series of insoluble salts."
<<" "<<"6.)It's compounds are isomorphous with potassium compounds."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==38)
cout<<"Stroncium:-"<<" "<<" "<<"1.)It was discovered by Davy."
<<" "<<"2.)It is a soft white metal & possess specific gravity of 2.5."
<<" "<<"3.)It is malleable and ductile."
<<" "<<"4.)It is comparitively more active than calcium."
<<" "<<"5.)It's nitrates are colourless crystalline solids."
<<" "<<"6.)It is not acted upon by fusion with alkali carbonates."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==39)
cout<<"Yttrium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==40)
cout<<"Zirconium:-"<<" "<<" "<<"1.)It is a silvery white metal."
<<" "<<"2.)It's oxide is a refractory material."
<<" "<<"3.)When heated in air it give black oxide."
<<" "<<"4.)It is not acted upon by fusion with alkali carbonates."
<<" "<<"5.)It's nitrate or chloride solution on hydrolysis give collidal."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==41)
cout<<"Niobium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
/*
else
if(c==42)
cout<<"Molybdenum:-"<<" "<<" "<<"1.)It acts as good adsorbant."
<<" "<<"2.)It is a grey metallic powder which remains untarnished in air."
<<" "<<"3.)When heated it gradually passes into oxide."
<<" "<<"4.)It is insoluble in HCl,HF & dil. sulphuric acid."
<<" "<<"5.)It is soluble in nitric acid, conc. sulphuric acid & aqua regia."
<<" "<<"6.)It is used as a catalyst in various chemical reactios."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==43)
cout<<"Technetium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==44)
cout<<"Ruthenium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==45)
cout<<"Rhodium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==46)
cout<<"Palladium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==47)
cout<<"Silver:-"<<" "<<" "<<"1.)It is a lustrous white metal."
<<" "<<"2.).It is a good conductor of heat and electricity."
<<" "<<"3.)It finds use in ornaments."
<<" "<<"4.)The principal ore of silver is silver glance."
<<" "<<"5.)It is a malleable and ductile."
<<" "<<"6.)It does not react with dilute acids."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==48)
cout<<"Cadmium:-"<<" "<<" "<<"1.)It is a soft bluish white metal."
<<" "<<"2.)It gets oxidised with moist air but when heated it yields CdO."
<<" "<<"3.)It melts at 594K and boils at 1040K."
<<" "<<"4.)With hallogen it forms cadmium hallide."
<<" "<<"5.)It reacts with nitric acid and sulphuric acid."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==49)
cout<<"Indium:-"<<" "<<" "<<"1.)It is a lustrous white metal."
<<" "<<"2.)It is malleable and ductile but becomes brittle at about 473K."
<<" "<<"3.)It is not attacked by organic acids."
<<" "<<"4.)It exhibits three allotropic forms."
<<" "<<"5.)It reacts with sulphur to form stannic sulphide."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==50)
cout<<"Tin:-"<<" "<<" "<<"1.)It is a lustrous white metal."
<<" "<<"2.)It is not attacked by organic acids."
<<" "<<"3.)It exibits three allotropic forms."
<<" "<<"4.)It reacts with sulphur to form stannic sulphide."
<<" "<<"5.)It is melleable & ductile but becomes brittle at about 473k."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==51)
cout<<"Antimony:-"<<" "<<" "<<"1.)It burns spontaneously with chlorine."
<<" "<<"2.)It is hard,brittle and white lustrous metal."
<<" "<<"3.)It forms alloy with tin,lead and copper."
<<" "<<"4.)At ordinary temperature it is not affected by air."
<<" "<<"5.)Pure antimony does not dissolve in HCl."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==52)
cout<<"Tellurium:-"<<" "<<" "<<"1.)It is poor conductor of electricity."
<<" "<<"2.)Powdered Te is grey in colour."
<<" "<<"3.)On heating it becomes crystalline."
<<" "<<"4.)It has highest electrical resistance in metals."
<<" "<<"5.)It has a metallic appearance."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==53)
cout<<"Iodine:-"<<" "<<" "<<"1.)It is spriangly soluble in water."
<<" "<<"2.)Iodine warmed with alcohol forms iodoform."
<<" "<<"3.)It gives shining black cryastals with metallic lusture."
<<" "<<"4.)It is strongest reducing halogen."
<<" "<<"5.)Iodine solution is decoloursed by alkali solution."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==54)
cout<<"Xenon:-"<<" "<<"n"<<"1.)It is a noble gas."
<<" "<<"2.)It forms a number of stable compounds."
<<" "<<"3.)It is a monoatomic gas at room temprature."
<<" "<<"4.)It has zero valency."
<<" "<<"5.)Xe oxides are formed by reaction of xenon flouride with water."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==55)
cout<<"Cesium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==56)
cout<<"Barium:-"<<" "<<" "<<"1.)Its density is 3.62g/c.c."
<<" "<<"2.)Its electronegativity is 0.89."
<<" "<<"3.)Its atomic radius is 222pm."
<<" "<<"4.)It has melting point & boiling point 1000k &2123k respectively."
<<" "<<"5.)It imparts Grassy green colour to the flame."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==57)
cout<<"lanthanum:-"<<" "<<" "<<"1.)Its ionic radius is 103pm."
<<" "<<"2.)It exhibits oxidation state of +3."
<<" "<<"3.)Its atomic radius is 187pm."
<<" "<<"4.)It is good conductor of heat & electricity."
<<" "<<"5.)It is resistant to corrosion."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==58)
cout<<"Cerium:-"<<" "<<" "<<"1.)It is a good oxidising agent."
<<"2.)Forms alloys readily with other metals."
<<"3.)It has high electropositive character."
<<"4.)It has low tendancy to form complexes."
<<"5.)It has very high melting point."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==59)
cout<<"Praseodymium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==60)
cout<<"Neodymium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==61)
cout<<"Promethium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==62)
cout<<"Samarium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==63)
cout<<"Europium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==64)
cout<<"Gadolinium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==65)
cout<<"Terbium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==66)
cout<<"Dysprosium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==67)
cout<<"Holmium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==68)
cout<<"Erbium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==69)
cout<<"Thulium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==70)
cout<<"Ytterbium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==71)
cout<<"Lutetium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==72)
cout<<"Hafnium:-"<<" "<<" "<<"1.)It is a silvery white metal."
<<" "<<"2.)It occurs in minerals."
<<" "<<"3.)It exhibits +3 & +4 oxidation states."
else
if(c==73)
cout<<"Tantalum:-"<<" "<<" "<<"1.)It is resistant to corrosion."
<<" "<<"2.)It is used in surgical vessel & as an anlytical weights."
<<" "<<"3.)It's atomic radii is 134pm."
else
if(c==74)
cout<<"Tungsten:-"<<" "<<" "<<"1.)It is hardest metal known."
<<" "<<"2.)It's filament is used in incandescent bulbs."
<<" "<<"3.)It's alloy forms steel for high speed tools."
else
if(c==75)
cout<<"Rhenium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==76)
cout<<"Osmium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==77)
cout<<"Iridium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==78)
cout<<"Platinium:-"<<" "<<" "<<"1.)It is very less reactive metal."
<<" "<<"2.)It shows catalytic properties in contact process."
<<" "<<"3.)It is used in the manufacture of hydrogen electrodes."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==79)
cout<<"Gold:-"<<" "<<" "<<"1.)It is known as coinage metal."
<<" "<<"2.)It is used in jwellery."
<<" "<<"3.)It has high electrical & thermal conductivity."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==80)
cout<<"Mercury:-"<<" "<<" "<<"1.)It is used in thermometers."
<<" "<<"2.)It is useful in making electrical contacts."
<<" "<<"3.)It is used in preparing amalgams of Cu,Ag,etc."
<<" "<<"4.)It is used as electrolyte in various processes."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==81)
cout<<"Thalium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==82)
cout<<"Lead:-"<<" "<<" "<<"1.)It is used for making containers."
<<" "<<"2.)It's atomic radius is 146pm."
<<" "<<"3.)It's electronegativity is 1.9."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==83)
cout<<"Bismuth:-"<<" "<<" "<<"1.)It's density is 9.3g/c.c."
<<" "<<"2.)It's atomic radius is 150pm."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==84)
cout<<"Polonium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==85)
cout<<"Astatine:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c=86)
cout<<"Radon:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==87)
cout<<"Francium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==88)
cout<<"Radium:-"<<" "<<" "<<"1.)It's density is 6g/c.c."
<<" "<<"2.)It's ionic radii is 1.52pm."
<<" "<<"3.)It is a radioactive element."
<<" "<<"4.)It was discovered by Madam Curie."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==89)
cout<<"Actinum:- "<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==90)
cout<<"Thorium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==91)
cout<<"Protactinum:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==92)
cout<<"Uranium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==93)
cout<<"Neptunium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==94)
cout<<"Plutonium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==95)
cout<<"Americium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==96)
cout<<"Curium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==97)
cout<<"Berkelium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c=98)
cout<<"Californium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==99)
cout<<"Einsteinium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==100)
cout<<"Fermium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==101)
cout<<"Mendelevium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==102)
cout<<"Nobelium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==103)
cout<<"Lawrencium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==104)
cout<<"Unnilquadium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==105)
cout<<"Unnilpentium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==106)
cout<<"Unnilhexium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==107)
cout<<"Unnilseptium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==108)
cout<<"Unniloctium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==109)
cout<<"Unnilennium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==110)
cout<<"Ununnilium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==111)
cout<<"Unununium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==112)
cout<<"Unubium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==113)
cout<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==114)
cout<<"Ununquadium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==115)
cout<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==116)
cout<<"Ununhexium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==117)
cout<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
else
if(c==118)
cout<<"Ununoctium:-"<<" "<<" "
<<" "<<"THIS ELEMENT IS NOT KNOWN SO FAR."
<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"_____*_____*_____*_____";
*/
delay(10000);
}
 
void periodic :: endscreen()
{
cleardevice();
setfillstyle(5,6);
fillellipse(310,230,300,90);
setcolor(14);
settextstyle(3,0,7);
outtextxy(170,180,"THE END");
delay(500);
}
 
void main()
{
int gm,gd = DETECT,i,j;
initgraph( &gd , &gm , "c:\tc\bgi");
periodic p;
p.showtable();
p.getdata();
p.putdata();
p.endscreen();
getch();
}