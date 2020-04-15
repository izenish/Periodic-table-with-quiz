#include <stdio.h>
  #include <conio.h>
  #include <graphics.h>
  #include <dos.h>
  #include <math.h>


  /* manipulates the position of planets on the orbit */
  void planetMotion(int xrad, int yrad, int midx, int midy, int x[60], int y[60])
  {
	int i, j = 0;

	/* positions of planets in their corresponding orbits */
	for (i = 360; i > 0; i = i - 6) {
		x[j] = midx - (xrad * cos((i * 3.14) / 180));
		y[j++] = midy - (yrad * sin((i * 3.14) / 180));
	}
	return;
  }

  int main()
  {
	/* request auto detection */
	int gdriver = DETECT, gmode, err;
	int i = 0, midx, midy;
	int xrad[9], yrad[9], x[9][60], y[9][60];
	int pos[9], planet[9], tmp;

	/* initialize graphic mode */
	initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
	err = graphresult();

	if (err != grOk)
	{
		/* error occurred */
		printf("Graphics Error: %s",
				grapherrormsg(err));
		return 0;
	}

	/* mid positions at x and y-axis */
	midx =(getmaxx()/2)+200;
	midy =(getmaxy()/2)-73;

	/* manipulating radius of all 9 planets */

	for (i = 0; i <1; i++) {
		planet[i] =5;
	}

	/* offset position for the planets on their corresponding orbit */
	for (i = 0; i < 9; i++) {
		pos[i] = i * 6;
	}

	/* orbits for all 9 planets */
	xrad[0] = 30, yrad[0] = 30;
	for (i = 1; i < 2; i++) {
		xrad[i] = xrad[i - 1] + 10;
		yrad[i] = yrad[i - 1] + 10;
	}

	/* positions of planets on their corresponding orbits */
	for (i = 0; i < 9; i++)
	{
	planetMotion(xrad[i], yrad[i], midx, midy, x[i], y[i]);
	}

	while (!kbhit()) {
		/* drawing 9 orbits */
		setcolor(WHITE);
		for (i = 0; i < 1; i++) {
			ellipse(midx, midy, 0, 360, xrad[i], yrad[i]);
		}


		/* mercury in first orbit */
		setcolor(RED);
		setfillstyle(SOLID_FILL, RED);
		pieslice(x[0][pos[0]], y[0][pos[0]], 0, 360, planet[0]);
		delay(300);
		 setcolor(BLACK);
		setfillstyle(SOLID_FILL, BLACK);
		pieslice(x[0][pos[0]], y[0][pos[0]], 0, 360, planet[0]);


			setcolor(RED);
		setfillstyle(SOLID_FILL, RED);
		pieslice(x[0][pos[3]], y[0][pos[3]], 0, 360, planet[0]);

			delay(300);
		 setcolor(BLACK);
		setfillstyle(SOLID_FILL, BLACK);
		pieslice(x[0][pos[3]], y[0][pos[3]], 0, 360, planet[0]);



		/* checking for one complete rotation */
		for (i = 0; i < 9; i++) {
			if (pos[i] <= 0) {
				pos[i] = 59;
			} else {
				pos[i] = pos[i] - 1;
			}
		}

		/* sleep for 100 milliseconds */
		delay(100);


	}

	/* deallocate memory allocated for graphic screen */
	closegraph();
	return 0;
  }
