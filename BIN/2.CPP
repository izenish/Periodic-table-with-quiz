#include<iostream.h>

#include<stdio.h>

#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>

#include<math.h>
#include<table.h>
#include<first.h>
#include<mouse1.h>
#include <e118.h>

int back();
void table();
void periodic();
void box();
void page();
void planetMotion();
void page();


       //int x,y,b;

       // mouse ko lagi


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



   /*

void helium()
{

  }   */





//#include <e118.h>

void hydrogen()
{

	int gdriver = DETECT, gmode, err;
	int i = 0, midx, midy;
	int xrad[9], yrad[9], x[9][60], y[9][60];
	int pos[9], planet[9], tmp;

		/* request auto detection */

	/* initialize graphic mode */
	initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
	err = graphresult();

	if (err != grOk)
	{
		/* error occurred */
		printf("Graphics Error: %s",
				grapherrormsg(err));

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

	/* positions of planets 																																		on their corresponding orbits */
	for (i = 0; i < 9; i++)
	{
	planetMotion(xrad[i], yrad[i], midx, midy, x[i], y[i]);
	}

		fp=fopen("Hydrogen.exe","r");

		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
	do
		{
		ch=fgetc(fp);
		putchar(ch);
	       //	getch();
		//hydrogen();
		}
		while(ch!=EOF);
	       //	back();




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


		delay(25);
		setcolor(BLACK);
		setfillstyle(SOLID_FILL, BLACK);
		pieslice(x[0][pos[0]], y[0][pos[0]], 0, 360, planet[0]);


			setcolor(RED);
		setfillstyle(SOLID_FILL, RED);
		pieslice(x[0][pos[3]], y[0][pos[3]], 0, 360, planet[0]);
			delay(25);
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


	}
 }

void periodic() //element ma click garisake paxi file read garna ko lagi
{
       table();
       getpointer();
       b=0;
	coo(&b,&x,&y);
while(!kbhit())
 {
	coo(&b,&x,&y);
	if(b==1)
	{                                                     //1
	     if(x>=0 && y>=100 && x<=35 && y<=130)
	   {
		cleardevice();



	/* deallocate memory allocated for graphic screen */
       //losegraph();



	    //   getch();
	    //outtextxy(100,2,"aman");
	    hydrogen();


		hidemouse();
	       //	cleardevice();

		     fclose(fp);





		getpointer();
	      // cleardevice();
	       }

	   else if(x>=595 && y>=100 && x<=630 && y<=130)         //2
	   {
		cleardevice();

		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		 getpointer();
	      // cleardevice();
	       }


	   else if(x>=0 && y>=130 && x<=35 && y<=160)               //3
	   {
		cleardevice();
	fp=fopen("Lithium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }


	   else if(x>=35 && y>=130 && x<=70 && y<=160)                 //4
	   {
		cleardevice();
	fp=fopen("Beryllium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

	   else if(x>=420 && y>=130 && x<=455 && y<=160)                  //5
	   {
		cleardevice();
	fp=fopen("Boron.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }


	   else if(x>=455 && y>=130 && x<=490 && y<=160)    //6
	   {
		cleardevice();
	fp=fopen("Carbon.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	    //   cleardevice();

	       }

	   else if(x>=490 && y>=130 && x<=525 && y<=160)       //7
	   {
		cleardevice();
	fp=fopen("Nitrogen.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	   //    cleardevice();

	       }


	   else if(x>=525 && y>=130 && x<=560 && y<=160)          //8
	   {
		cleardevice();
	fp=fopen("Oxygen.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

	   else if(x>=560 && y>=130 && x<=595 && y<=160)     //9
	   {
		cleardevice();
	fp=fopen("Fluorine.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	    //   cleardevice();

	       }

	   else if(x>=590 && y>=130 && x<=630 && y<=160)        //10
	   {
		cleardevice();
	fp=fopen("Neon.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	   //    cleardevice();

	       }

	   else if(x>=0 && y>=160 && x<=35 && y<=190)      //11
	   {
		cleardevice();
	fp=fopen("Sodium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	     //  cleardevice();

	       }

	   else if(x>=35 && y>=160 && x<=70 && y<=190)
	   {
		cleardevice();
	fp=fopen("Magnesium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	    //   cleardevice();

	       }

	   else if(x>=420 && y>=160 && x<=455 && y<=190)
	   {
		cleardevice();
	fp=fopen("Aluminium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	     //  cleardevice();

	       }
		 else if(x>=455 && y>=160 && x<=490 && y<=190)
	   {
		cleardevice();
	fp=fopen("Silicon.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		  else if(x>=490 && y>=160 && x<=525 && y<=190)
	   {
		cleardevice();
	fp=fopen("Phosphorous.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		   else if(x>=525 && y>=160 && x<=560 && y<=190)
	   {
		cleardevice();
	fp=fopen("Sulphur.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		   else if(x>=560 && y>=160 && x<=595 && y<=190)
	   {
		cleardevice();
	fp=fopen("Chlorine.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		   else if(x>=595 && y>=160 && x<=630 && y<=190)
	   {
		cleardevice();
	fp=fopen("Argon.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		 else if(x>=0 && y>=190 && x<=35 && y<=220)
	   {
		cleardevice();
	fp=fopen("Potassium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		 else if(x>=35 && y>=190 && x<=70 && y<=220)
	   {
		cleardevice();
	fp=fopen("Calcium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		 else if(x>=70 && y>=190 && x<=105 && y<=220)
	   {
		cleardevice();
	fp=fopen("Scandium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

		 else if(x>=105 && y>=190 && x<=140 && y<=220)
	   {
		cleardevice();
	fp=fopen("Titanium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }


		 else if(x>=140 && y>=190 && x<=175 && y<=220)
	   {
		cleardevice();
	fp=fopen("Vanadium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }


		 else if(x>=175 && y>=190 && x<=210 && y<=220)
	   {
		cleardevice();
	fp=fopen("Chromium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

		 else if(x>=210 && y>=190 && x<=245 && y<=220)
	   {
		cleardevice();
	fp=fopen("Manganese.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

		 else if(x>=245 && y>=190 && x<=280 && y<=220)
	   {
		cleardevice();
	fp=fopen("Iron.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }


		 else if(x>=280 && y>=190 && x<=315 && y<=220)
	   {
		cleardevice();
	fp=fopen("Cobalt.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }



		 else if(x>=315 && y>=190 && x<=350 && y<=220)
	   {
		cleardevice();
	fp=fopen("Nickel.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }



		 else if(x>=350 && y>=190 && x<=385 && y<=220)
	   {
		cleardevice();
	fp=fopen("Copper.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

		 else if(x>=385 && y>=190 && x<=420 && y<=220)
	   {
		cleardevice();
	fp=fopen("Zinc.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		 else if(x>=420 && y>=190 && x<=455 && y<=220)
	   {
		cleardevice();
	fp=fopen("Gallium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

		 else if(x>=455 && y>=190 && x<=490 && y<=220)
	   {
		cleardevice();
	fp=fopen("Germanium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		 else if(x>=490 && y>=190 && x<=525 && y<=220)
	   {
		cleardevice();
	fp=fopen("Arsenic.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		 else if(x>=525 && y>=190 && x<=560 && y<=220)
	   {
		cleardevice();
	fp=fopen("Seleium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }


	       else if(x>=560 && y>=190 && x<=595 && y<=220)
	   {
		cleardevice();
	fp=fopen("Bromine.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	       /*
		 else if(x>=595 && y>=190 && x<=630 && y<=220)
	   {
		cleardevice();
	fp=fopen("Krypton.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

		else if(x>=0 && y>=220 && x<=35 && y<=250)
	   {
		cleardevice();
	fp=fopen("Rubidium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

		else if(x>=35 && y>=220 && x<=70 && y<=250)
	   {
		cleardevice();
	fp=fopen("Strontium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=70 && y>=220 && x<=105 && y<=250)
	   {
		cleardevice();
	fp=fopen("Yttrium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=105 && y>=220 && x<=140 && y<=250)
	   {
		cleardevice();
	fp=fopen("Zirconium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=140 && y>=220 && x<=175 && y<=250)
	   {
		cleardevice();
	fp=fopen("Niobium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=175 && y>=220 && x<=210 && y<=250)
	   {
		cleardevice();
	fp=fopen("Molybdenum.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=210 && y>=220 && x<=245 && y<=250)
	   {
		cleardevice();
	fp=fopen("Technetium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

		else if(x>=245 && y>=220 && x<=280 && y<=250)
	   {
		cleardevice();
	fp=fopen("Ruthenium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=280 && y>=220 && x<=315 && y<=250)
	   {
		cleardevice();
	fp=fopen("Rhodium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=315 && y>=220 && x<=350 && y<=250)
	   {
		cleardevice();
	fp=fopen("Palladium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=350 && y>=220 && x<=385 && y<=250)
	   {
		cleardevice();
	fp=fopen("Silver.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=385 && y>=220 && x<=420 && y<=250)
	   {
		cleardevice();
	fp=fopen("Cadmium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=420 && y>=220 && x<=455 && y<=250)
	   {
		cleardevice();
	fp=fopen("Indium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=455 && y>=220 && x<=490 && y<=250)
	   {
		cleardevice();
	fp=fopen("Tin.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
			else if(x>=490 && y>=220 && x<=525 && y<=250)
	   {
		cleardevice();
	fp=fopen("Antimony.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();    																																																																		f
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=525 && y>=220 && x<=560 && y<=250)
	   {
		cleardevice();
	fp=fopen("Tellurium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=560 && y>=220 && x<=595 && y<=250)
	   {
	      cleardevice();
	fp=fopen("Iodine.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=595 && y>=220 && x<=630 && y<=250)
	   {
		cleardevice();
	fp=fopen("Xenon.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=0 && y>=250 && x<=35 && y<=280)
	   {
		cleardevice();
	fp=fopen("Cesium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=35 && y>=250 && x<=70 && y<=280)
	   {
		cleardevice();
	fp=fopen("Barium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=105 && y>=380 && x<=140 && y<=410)
	   {
		cleardevice();
	fp=fopen("Lanthanum.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

		else if(x>=140 && y>=380 && x<=175 && y<=410)
	   {
		cleardevice();
	fp=fopen("Cerium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=175 && y>=380 && x<=210 && y<=410)
	   {
		cleardevice();
	fp=fopen("Praseodymium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=210 && y>=380 && x<=245 && y<=410)
	   {
		cleardevice();
	fp=fopen("Neodymium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=245 && y>=380 && x<=280 && y<=410)
	   {
		cleardevice();
	fp=fopen("Promethium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=280 && y>=380 && x<=315 && y<=410)
	   {
		cleardevice();
	fp=fopen("Samarium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=315 && y>=380 && x<=350 && y<=410)
	   {
		cleardevice();
	fp=fopen("Europium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=350 && y>=380 && x<=385 && y<=410)
	   {
		cleardevice();
	fp=fopen("Gadolinium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=385 && y>=380 && x<=420 && y<=410)
	   {
		cleardevice();
	fp=fopen("Terbium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=420 && y>=380 && x<=455 && y<=410)
	   {
		cleardevice();
	fp=fopen("Dysprosium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=455 && y>=380 && x<=490 && y<=410)
	   {
		cleardevice();
	fp=fopen("Holmium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=490 && y>=380 && x<=525 && y<=410)
	   {
		cleardevice();
	fp=fopen("Erbium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=525 && y>=380 && x<=560 && y<=410)
	   {
		cleardevice();
	fp=fopen("Thulium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=560 && y>=380 && x<=595 && y<=410)
	   {
		cleardevice();
	fp=fopen("Ytterbium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=595 && y>=380 && x<=630 && y<=410)
	   {
		cleardevice();
	fp=fopen("Lutetium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=105 && y>=250 && x<=140 && y<=280)
	   {
		cleardevice();
	fp=fopen("Hafnium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=140 && y>=250 && x<=175 && y<=280)
	   {
		cleardevice();
	fp=fopen("Tantalum.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=175 && y>=250 && x<=210 && y<=280)
	   {
		cleardevice();
	fp=fopen("Tungsten.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=210 && y>=250 && x<=245 && y<=280)
	   {
		cleardevice();
	fp=fopen("Rhenium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=245 && y>=250 && x<=280 && y<=280)
	   {
		cleardevice();
	fp=fopen("Osmium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=280 && y>=250 && x<=315 && y<=280)
	   {
		cleardevice();
	fp=fopen("Iridium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=315 && y>=250 && x<=350 && y<=280)
	   {
		cleardevice();
	fp=fopen("Platinum.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=350 && y>=250 && x<=285 && y<=280)
	   {
		cleardevice();
	fp=fopen("Gold.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=385 && y>=250 && x<=420 && y<=280)
	   {
		cleardevice();
	fp=fopen("Mercury.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=420 && y>=250 && x<=490 && y<=280)
	   {
		cleardevice();
	fp=fopen("Thallium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=455 && y>=250 && x<=490 && y<=280)
	   {
		cleardevice();
	fp=fopen("Lead.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=490 && y>=250 && x<=525 && y<=280)
	   {
		cleardevice();
	fp=fopen("Bismuth.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=525 && y>=250 && x<=560 && y<=280)
	   {
		cleardevice();
	fp=fopen("Polonium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=560 && y>=250 && x<=595 && y<=280)
	   {
		cleardevice();
	fp=fopen("Astatine.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=595 && y>=250 && x<=360 && y<=280)
	   {
		cleardevice();
	fp=fopen("Radon.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=0 && y>=280 && x<=35 && y<=310)
	   {
		cleardevice();
	fp=fopen("Francium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=35 && y>=280 && x<=70 && y<=310)
	   {
		cleardevice();
	fp=fopen("Radium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=105 && y>=410 && x<=140 && y<=440)
	   {
		cleardevice();
	fp=fopen("Actinium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=140 && y>=410 && x<=175 && y<=440)
	   {
		cleardevice();
	fp=fopen("Thorium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=175 && y>=410 && x<=210 && y<=440)
	   {
		cleardevice();
	fp=fopen("Protactinium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=210 && y>=410 && x<=245 && y<=440)
	   {
		cleardevice();
	fp=fopen("Uranium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=245 && y>=410 && x<=280 && y<=440)
	   {
		cleardevice();
	fp=fopen("Neptunium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=280 && y>=410 && x<=315 && y<=440)
	   {
		cleardevice();
	fp=fopen("Plutonium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=315 && y>=410 && x<=350 && y<=440)
	   {
		cleardevice();
	fp=fopen("Americium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=350 && y>=410 && x<=385 && y<=440)
	   {
		cleardevice();
	fp=fopen("Curium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=385 && y>=410 && x<=420 && y<=440)
	   {
		cleardevice();
	fp=fopen("Berkelium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=420 && y>=410 && x<=455 && y<=440)
	   {
		cleardevice();
	fp=fopen("Californium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=455 && y>=410 && x<=490 && y<=440)
	   {
		cleardevice();
	fp=fopen("Einsteinium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=490 && y>=410 && x<=525 && y<=440)
	   {
		cleardevice();
	fp=fopen("Fermium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=525 && y>=410 && x<=560 && y<=440)
	   {
		cleardevice();
	fp=fopen("Mendelevium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=560 && y>=410 && x<=595 && y<=440)
	   {
		cleardevice();
	fp=fopen("Nobelium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		else if(x>=595 && y>=410 && x<=630 && y<=440)
	   {
		cleardevice();
	fp=fopen("Lawrencium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
			else if(x>=105 && y>=280 && x<=140 && y<=310)
	   {
		cleardevice();
	fp=fopen("Rutherfordium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();
	       }
	       else if(x>=140 && y>=280 && x<=175 && y<=310)
	   {
		cleardevice();
	fp=fopen("Dubnium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	       else if(x>=175 && y>=280 && x<=245 && y<=310)
	   {
		cleardevice();
	fp=fopen("Seaborgium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	       else if(x>=210 && y>=280 && x<=245 && y<=310)
	   {
		cleardevice();
	fp=fopen("Bohrium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
		 else if(x>=245 && y>=280 && x<=315 && y<=310)
	   {
		cleardevice();
	fp=fopen("Hassium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	       else if(x>=280 && y>=280 && x<=315 && y<=310)
	   {
		cleardevice();
	fp=fopen("Meitnerium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	       else if(x>=315 && y>=280 && x<=350 && y<=310)
	   {
		cleardevice();
	fp=fopen("Darmstadtium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	       else if(x>=350 && y>=280 && x<=385 && y<=310)
	   {
		cleardevice();
	fp=fopen("Roentgenium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	       else if(x>=385 && y>=280 && x<=420 && y<=310)
	   {
		cleardevice();
	fp=fopen("Copernicium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	       else if(x>=420 && y>=280 && x<=455 && y<=310)
	   {
		cleardevice();
	fp=fopen("Nihonium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	      else if(x>=455 && y>=280 && x<=490 && y<=310)
	   {
		cleardevice();
	fp=fopen("Flerovium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	       else if(x>=490 && y>=280 && x<=525 && y<=310)
	   {
		cleardevice();
	fp=fopen("Moscovium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }
	else if(x>=525 && y>=280 && x<=560 && y<=310)
	   {
		cleardevice();
	fp=fopen("Livermorium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }

	       else if(x>=560 && y>=280 && x<=595 && y<=310)
	   {
		cleardevice();
	fp=fopen("Tennessine.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();
	      // cleardevice();

	       }          */
	      else if(x>=595 && y>=280 && x<=630 && y<=310)
	   {e118();
	       }

	  else if(x>=0 && y>=0 && x<=35 && y<=25)  //	back bottom click garepaxi page function ma call garxa
	   {
		hidemouse();
		 cleardevice();
		page();

	       }
	}
}

}

int back()  //back bottom
{
     outtextxy(4,10,"Back");
      coo(&b,&x,&y);
      getpointer();
while(!kbhit())
 {
	coo(&b,&x,&y);

	if(b==1)
	{
		if(x>=0 && y>=0 && x<=35 && y<=25)
		{
		hidemouse();
		cleardevice();
		periodic();
		cleardevice();

		}
       }
   }
   return 0;
 }
void main()
{

  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
// loading();
  cleardevice();
  page();
closegraph();
}


	void page() //first page ma click garisake paxi periodic table ma jana ko lagi
	{
	cleardevice();
	box();
	  getpointer();
	  coo(&b,&x,&y);
	while(!kbhit())
	{
	coo(&b,&x,&y);

	if(b==1)
	{
	  if(x>=88 && y>=189 && x<=197 && y<=216)
	   {

	     closegraph();
	     int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	       periodic();
	       cleardevice();
	      getpointer();
	       }
	}
}

cout<<"press any key to exit().";
getch();
}