  #include <stdio.h>
  #include <conio.h>
  #include <graphics.h>
  #include <dos.h>
  #include <math.h>

  int moon1;
  int x1[60],y1[60];
  /* finds the location of moon on the virtual orbit around earth */
  void moonMotion(int radius, int midx, int midy, int x[60], int y[60])
   {
	int i, j = 0;



	/* positions of moon around the earth */
	for (i = 360; i > 0; i = i - 6)
	 {
		x[j] = midx - (radius * cos((i * 3.14) / 180));
		y[j++] = midy - (radius * sin((i * 3.14) / 180));
	}
	return;
  }

  int main() {
	/* request auto detection */
	int gdriver = DETECT, gmode, err;
	int midx, midy, earth, orbit, moon;
	int i = 0, x[60], y[60];

	/* initialize graphic mode */
	initgraph(&gdriver, &gmode, "C://TURBOC3//BGI");
	err = graphresult();

	if (err != grOk) {
		/* error occurred */
		printf("Graphics Error: %s",
				grapherrormsg(err));
		return 0;
	}

	earth = 50, orbit = 100, moon = 25, moon1 = 25;

	/* mid position in x and y-axis */
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;

	/* get the positions of moon around earth for rotation */
	moonMotion(orbit, midx, midy, x, y);


	while(!kbhit()) {
		/* drawing earth at the center */
		setcolor(BLUE);
		setfillstyle(SOLID_FILL, BLUE );
		pieslice(midx, midy, 0, 360, earth);

		/* drawing virtual orbit around the earth */
		setcolor(WHITE);
		setlinestyle(DASHED_LINE, 1, 1);
		circle(midx, midy, orbit);

		 //delay(500);
/* rotate moon around the earth */
	setcolor(RED);
		setfillstyle(SOLID_FILL,RED);
		setlinestyle(SOLID_LINE, 1, 1);
		pieslice(x[i], y[i], 0, 360, moon);

		/* sleep for 200 milliseconds */
	     delay(200);


			setcolor(YELLOW);
		setfillstyle(SOLID_FILL, YELLOW);
		setlinestyle(SOLID_LINE, 1, 1);
		pieslice(x[i], y[i], 0, 360, moon);





			setcolor(WHITE);
		setlinestyle(DASHED_LINE, 1, 1);
		circle(midx, midy, orbit+70);

		delay(200);

		/* clears the graphic screen */
			cleardevice();

		/* checks for one complete rotation */
		i = (i + 1) % 60;


}

	closegraph();

	return 0;
  }
