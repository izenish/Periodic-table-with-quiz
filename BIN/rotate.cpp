/*---------------------------------
Animation of a rotating polygon
using VOGLE
---------------------------------*/
#include<iostream>
#include<cmath>
#include "VOGLE/vogle c++.h"
using namespace std;
int main()
{
//--- Window plotting limits:
float xmin=0.0; float xmax=1.0; // plotting limits
float ymin=0.0; float ymax=1.0;
float xmarg = 0.2*(xmax-xmin); // plotting margins
float ymarg = 0.2*(ymax-ymin);
//--- Polygon variables:
const int n = 5; // number of vertices
float points[n][2]; // plotting array
float omega = 0.1; // angular velocity
float t=0; // time
float Dt = 0.01; // time step
float xc rot = 0.5; // rotation center
float yc rot = 0.5; // rotation center
//--- Initial polygon vertices:
float x[n] = {0.80, 0.90, 0.90, 0.80, 0.80};
float y[n] = {0.50, 0.50, 0.88, 0.88, 0.50};
//--- Prepare the graphics:
prefposition (500,100); // window position
prefsize (300, 300); // window size
char device[]="X11"; // initialize on the screen
vinit(device);
//--- Define the plotting units
ortho2 (xmin-xmarg, xmax+xmarg, ymin-ymarg, ymax+ymarg);
//--- Polygon plotting option:
bool fill = true; // fill the polygon
polyfill (fill);
//--- Animation loop:
backbuffer(); // draw in the back buffer
repeat:
color(BLUE);
clear();
float dot = omega*Dt;
float cs = cos(dot);
float sn = sin(dot);
//--- Rotate the polygon by the angle dot around the rotation center:
for (int i=0; i<n; i++)
{
float xtemp = x[i]-xc rot;
float ytemp = y[i]-yc rot;
x[i] = xtemp*cs + ytemp*sn + xc rot;
y[i] = -xtemp*sn + ytemp*cs + yc rot;
points[i][0]=x[i];
points[i][1]=y[i];
}
//--- Paint the polygon:
color (RED);
poly2 (n,points);
//--- Swap the buffers:
swapbuffers();
//--- check the keyboard:
char kbd = char(checkkey()); // any key pressed?
//--- If s is pressed, wait for another key:
if(kbd == ’s’)
{
char kbd1 = char(getkey());
}
//--- If q is pressed, quit:
if(kbd == ’q’)
{
vexit();
exit(1);
}
t=t+Dt; // update time
goto repeat;
//--- Done
return 0;
}