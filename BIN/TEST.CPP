#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<table.h>
#include<first.h>
int back();
void table();
void periodic();
void box();
void page();

	void page();
		FILE *fp;
		char ch;
       int x,y,b;

       // mouse ko lagi
     union REGS i,o;

void mouse()  //mouse address
{
    i.x.ax=0;
    int86(51,&i,&o);
}
void getpointer() //mouse pointer
{
    i.x.ax=1;
    int86(51,&i,&o);
}
void coo(int *b,int *x,int *y) //mouse bottom
{
    i.x.ax=3;
    int86(0x33,&i,&o);
    *b=o.x.bx;
    *x=o.x.cx;
    *y=o.x.dx;
}
void hidemouse()
{
i.x.ax=2;
int86(0x33,&i,&o);
}

void periodic() //element ma click garisake paxi file read garna ko lagi
{
       table();
       getpointer();
	coo(&b,&x,&y);
while(!kbhit())
 {
	coo(&b,&x,&y);

	if(b==1)
	{                                                     //1
	     if(x>=0 && y>=100 && x<=35 && y<=130)
	   {
		cleardevice();
	fp=fopen("C://turboc3//element//Hydrogen.exe","r");
		if(fp==NULL)
		{
		 hidemouse();
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

	   else if(x>=595 && y>=100 && x<=630 && y<=130)         //2
	   {
		cleardevice();
	fp=fopen("Helium.exe","r");
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
	fp=fopen("be.exe","r");
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

	   else if(x>=35 && y>=130 && x<=70 && y<=160)
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
	fp=fopen("vanadium.exe","r");
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