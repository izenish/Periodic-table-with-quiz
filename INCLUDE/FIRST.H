
 void loading()  		 // loading
{
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
}
 void box()			//first page display ko lagi
 {
	
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
outtextxy(96,279,"Quiz");
rectangle(88,309,197,336);
outtextxy(99,319,"Exit");


settextstyle(0,EMPTY_FILL,13);
setcolor(YELLOW);
outtextxy(310,219,"C");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
setcolor(RED);
outtextxy(340,258,"HEMISTRY APP");
       }