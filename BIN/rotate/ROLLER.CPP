#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,x,y,i;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 x=getmaxx()/2;
 y=getmaxy()/2;
 while(!kbhit())
 {
 for(i=0;i<500;i++)//to move home.
 {  // setfillstyle(SOLID_FILL,GREEN);
 setcolor(RED);
 rectangle(x-100+i,y-50,x+100+i,y+150);//boarder of home

 setcolor(BLUE);

 setcolor(WHITE);
 circle(x+i,y-100,35);//top circle
 rectangle(x-75+i,y,x-35+i,y+50); //left window
 rectangle(x+75+i,y,x+35+i,y+50); //right window
 rectangle(x-20+i,y+75,x+20+i,y+150);//door
 rectangle(x-100+i,y+160,x+100+i,y+150);   //down plate
 circle(x-75+i,y+190,30); //left outer circle(tire)
 circle(x-75+i,y+190,10);//left inner circle(tire)

 circle(x+75+i,y+190,30);//right outer circle(tire)
 circle(x+75+i,y+190,10);//right inner circle(tire)

  line(x-100+i,y-50,x+i,y-200); //one side line of home cap
 line(x+100+i,y-50,x+i,y-200); //another side line of home cap
 delay(10);
 cleardevice();//clear the statement above
  line(x-400,y+220,x+400,y+220);//road
}
  }
 getch();
 closegraph();

}


