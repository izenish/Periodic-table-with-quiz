#include <graphics.h>
#include <conio.h>
#include <iostream.h>
void table();
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
table();
getch();
}
void table()
{
   /* initialize graphics window at 400 x 300 */
   initwindow(400, 300);
   /* draw a line */
   line(0, 0, getmaxx(), getmaxy());
      getch();

   closegraph();

   return 0;

}
