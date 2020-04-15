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
#include<l.h>
#include <helium.h>
#include <li.h>
#include <be.h>
#include <bo.h>
#include<q.h>
#include <glossary.h>


int back();
void table();
void periodic();
void box();
void page();
void electronmotion();
void fileNull();
void glossary();
void read();
void detail();


	void page();
  //		FILE *fp;
	   //  char ch;
     //  int b,x,y;

     //	mouse ko lagi
	  // union REGS i,o;

void fileNull()
{
	if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
}
void read()
{
		    getpointer();
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

}


void periodic() //element ma click garisake paxi file read garna ko lagi
{
      cleardevice();
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

	    hydrogen();


	 /*	hidemouse();
			    fclose(fp);
			getpointer();
	   */
	       }

	   else if(x>=595 && y>=100 && x<=630 && y<=130)         //2
	   {
		cleardevice();
	   helium();


	      }




	   else if(x>=0 && y>=130 && x<=35 && y<=160)               //3
	{ cleardevice();
	li();
			}


	   else if(x>=35 && y>=130 && x<=70 && y<=160)                 //4
	   {   	cleardevice();
	   be();

	 }

	   else if(x>=420 && y>=130 && x<=455 && y<=160)                  //5
	   {      	cleardevice();
	   bo();

	  }

else if(x>=455 && y>=130 && x<=490 && y<=160)    //6
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Carbon.exe","r");
		read();
	       }

      else if(x>=490 && y>=130 && x<=525 && y<=160)       //7
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Nitrogen.exe","r");
		read();
	       }


     else if(x>=525 && y>=130 && x<=560 && y<=160)          //8
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Oxygen.exe","r");
		read();
	       }

      else if(x>=560 && y>=130 && x<=595 && y<=160)     //9
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Fluorine.exe","r");
		read();

	       }

      else if(x>=590 && y>=130 && x<=630 && y<=160)        //10
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Neon.exe","r");
		read();
	       }

       else if(x>=0 && y>=160 && x<=35 && y<=190)      //11
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Sodium.exe","r");
		read();


	       }
							       //12
      else if(x>=35 && y>=160 && x<=70 && y<=190)
	   {    hidemouse();
		cleardevice();
		fp=fopen("Ma.exe","r");
		read();

	       }

      else if(x>=420 && y>=160 && x<=455 && y<=190)          //13
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Al.exe","r");
		read();

	       }
      else if(x>=455 && y>=160 && x<=490 && y<=190)        //14
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Silicon.exe","r");
		read();
		getpointer();

	    }
       else if(x>=490 && y>=160 && x<=525 && y<=190)       //15
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Ph.exe","r");
		read();

   }
       else if(x>=525 && y>=160 && x<=560 && y<=190)       //16
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Sulphur.exe","r");
		read();

	       }
      else if(x>=560 && y>=160 && x<=595 && y<=190)      //17
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Chlorine.exe","r");
		read();

	       }
      else if(x>=595 && y>=160 && x<=630 && y<=190)       //18
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Argon.exe","r");
		read();
	       }
      else if(x>=0 && y>=190 && x<=35 && y<=220)           //19
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Po.exe","r");
		read();
	       }
      else if(x>=35 && y>=190 && x<=70 && y<=220)         //20
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Calcium.exe","r");
		read();
		       }
      else if(x>=70 && y>=190 && x<=105 && y<=220)        //21
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Scandium.exe","r");
		read();

	       }

       else if(x>=105 && y>=190 && x<=140 && y<=220)      //22
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Titanium.exe","r");
		read();
	       }


       else if(x>=140 && y>=190 && x<=175 && y<=220)     //23
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Vanadium.exe","r");
		read();

	  }
       else if(x>=175 && y>=190 && x<=210 && y<=220)      //24
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Chromium.exe","r");
		read();
	       }

       else if(x>=210 && y>=190 && x<=245 && y<=220)      //25
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Man.exe","r");
		read();

	       }

       else if(x>=245 && y>=190 && x<=280 && y<=220)      //26
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Iron.exe","r");
		read();
		getpointer();
	       }


       else if(x>=280 && y>=190 && x<=315 && y<=220)      //27
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Cobalt.exe","r");
		read();
		getpointer();
	       }

      else if(x>=315 && y>=190 && x<=350 && y<=220)       //28
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Nickel.exe","r");
		read();
		getpointer();
		}

       else if(x>=350 && y>=190 && x<=385 && y<=220)      //29
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Copper.exe","r");
		read();
		getpointer();
	       }

       else if(x>=385 && y>=190 && x<=420 && y<=220)       //30
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Zinc.exe","r");
		read();
		getpointer();
	       }
       else if(x>=420 && y>=190 && x<=455 && y<=220)       //31
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Gallium.exe","r");
		read();
		getpointer();
	       }

       else if(x>=455 && y>=190 && x<=490 && y<=220)        //32
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Germanium.exe","r");
		read();
		getpointer();
	       }
       else if(x>=490 && y>=190 && x<=525 && y<=220)       //33
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Arsenic.exe","r");
		read();
		getpointer();
	       }
       else if(x>=525 && y>=190 && x<=560 && y<=220)        //34
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Seleium.exe","r");
		read();
		getpointer();
	       }


       else if(x>=560 && y>=190 && x<=595 && y<=220)           //35
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Bromine.exe","r");
		read();
		getpointer();
	       }
	else if(x>=595 && y>=190 && x<=630 && y<=220)        //36
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Krypton.exe","r");
		read();
		getpointer();
	       }

	else if(x>=0 && y>=220 && x<=35 && y<=250)            //37
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Rubidium.exe","r");
		read();
		getpointer();
	       }

	else if(x>=35 && y>=220 && x<=70 && y<=250)           //38
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Strontium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=70 && y>=220 && x<=105 && y<=250)          //39
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Yttrium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=105 && y>=220 && x<=140 && y<=250)         //40
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Zirconium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=140 && y>=220 && x<=175 && y<=250)           //41
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Niobium.exe","r");
		read();
		getpointer();
	       }
							     //42
	else if(x>=175 && y>=220 && x<=210 && y<=250)
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Molybdenum.exe","r");
		read();
		getpointer();
	       }
	else if(x>=210 && y>=220 && x<=245 && y<=250)        //43
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Technetium.exe","r");
		read();
		getpointer();
	       }

	else if(x>=245 && y>=220 && x<=280 && y<=250)       //44
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Ruthenium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=280 && y>=220 && x<=315 && y<=250)        //45
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Rhodium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=315 && y>=220 && x<=350 && y<=250)         //46
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Palladium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=350 && y>=220 && x<=385 && y<=250)       //47
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Silver.exe","r");
		read();
		getpointer();
	       }
	else if(x>=385 && y>=220 && x<=420 && y<=250)         //48
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Cadmium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=420 && y>=220 && x<=455 && y<=250)         //49
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Indium.exe","r");
		read();
		getpointer();
	       }
       else if(x>=455 && y>=220 && x<=490 && y<=250)           //50
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Tin.exe","r");
		read();
		getpointer();
	       }
	else if(x>=490 && y>=220 && x<=525 && y<=250)           //51
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Antimony.exe","r");
		read();
		getpointer();
	       }
	else if(x>=525 && y>=220 && x<=560 && y<=250)            //52
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Tellurium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=560 && y>=220 && x<=595 && y<=250)             //53
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Iodine.exe","r");
		read();
		getpointer();
	       }
       else if(x>=595 && y>=220 && x<=630 && y<=250)                //54
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Xenon.exe","r");
		read();
		getpointer();
	       }
      else if(x>=0 && y>=250 && x<=35 && y<=280)                 //55
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Cesium.exe","r");
		read();
		getpointer();
	       }
       else if(x>=35 && y>=250 && x<=70 && y<=280)               //56
	   {
		hidemouse();
		cleardevice();
		fp=fopen("Barium.exe","r");
		read();
		getpointer();
	       }  /*
	else if(x>=105 && y>=380 && x<=140 && y<=410)
	   {
		  hidemouse();                                              //57
		cleardevice();
		fp=fopen("Lanthanum.exe","r");
		read();
		getpointer();
	       }

	else if(x>=140 && y>=380 && x<=175 && y<=410)
	   {     hidemouse();                                               //58
		cleardevice();
		fp=fopen("Cerium.exe","r");
		read();
		getpointer();
	       }

       else if(x>=175 && y>=380 && x<=210 && y<=410)            //59
	   {	hidemouse();
		cleardevice();
		fp=fopen("Praseodymium.exe","r");
		read();
		getpointer();

	       }
	else if(x>=210 && y>=380 && x<=245 && y<=410)           //60
	   {	hidemouse();
		cleardevice();
		fp=fopen("Neodymium.exe","r");
		read();
		getpointer();

	       }
	else if(x>=245 && y>=380 && x<=280 && y<=410)            //61
	   {	hidemouse();
		cleardevice();
		fp=fopen("Promethium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=280 && y>=380 && x<=315 && y<=410)           //62
	   {	hidemouse();
		cleardevice();
		fp=fopen("Samarium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=315 && y>=380 && x<=350 && y<=410)            //63
	   {	hidemouse();
		cleardevice();
		fp=fopen("Europium.exe","r");
		read();
		getpointer();

	       }
	else if(x>=350 && y>=380 && x<=385 && y<=410)            //64
	   {	hidemouse();
		cleardevice();
		fp=fopen("Gadolinium.exe","r");
		read();
		getpointer();

	       }
	else if(x>=385 && y>=380 && x<=420 && y<=410)            //65
	   {	hidemouse();
		cleardevice();
		fp=fopen("Terbium.exe","r");
		read();
		getpointer();

	       }
	else if(x>=420 && y>=380 && x<=455 && y<=410)           //66
	   {	hidemouse();
		cleardevice();
		fp=fopen("Dysprosium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=455 && y>=380 && x<=490 && y<=410)           //67
	   {	hidemouse();
		cleardevice();
		fp=fopen("Holmium.exe","r");
		read();
		getpointer();

	       }
	else if(x>=490 && y>=380 && x<=525 && y<=410)           //68
	   {	hidemouse();
		cleardevice();
		fp=fopen("Erbium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=525 && y>=380 && x<=560 && y<=410)           //69
	   {	hidemouse();
		cleardevice();
		fp=fopen("Thulium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=560 && y>=380 && x<=595 && y<=410)           //70
	   {	hidemouse();
		cleardevice();
		fp=fopen("Ytterbium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=595 && y>=380 && x<=630 && y<=410)           //71
	   {	hidemouse();
		cleardevice();
		fp=fopen("Lutetium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=105 && y>=250 && x<=140 && y<=280)            //72
	   {	hidemouse();
		cleardevice();
		fp=fopen("Hafnium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=140 && y>=250 && x<=175 && y<=280)            //73
	   {	hidemouse();
		cleardevice();
		fp=fopen("Tantalum.exe","r");
		read();
		getpointer();
	       }
	else if(x>=175 && y>=250 && x<=210 && y<=280)            //74
	   {	hidemouse();
		cleardevice();
		fp=fopen("Tungsten.exe","r");
		read();
		getpointer();

	       }
	else if(x>=210 && y>=250 && x<=245 && y<=280)             //75
	   {	hidemouse();
		cleardevice();
		fp=fopen("Rhenium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=245 && y>=250 && x<=280 && y<=280)            //76
	   {	hidemouse();
		cleardevice();
		fp=fopen("Osmium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=280 && y>=250 && x<=315 && y<=280)            //77
	   {	hidemouse();
		cleardevice();
		fp=fopen("Iridium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=315 && y>=250 && x<=350 && y<=280)             //78
	   {	hidemouse();
		cleardevice();
		fp=fopen("Platinum.exe","r");
		read();
		getpointer();
	       }
	else if(x>=350 && y>=250 && x<=285 && y<=280)           //79
	   {	hidemouse();
		cleardevice();
		fp=fopen("Gold.exe","r");
		read();
		getpointer();

	       }
	else if(x>=385 && y>=250 && x<=420 && y<=280)           //80
	   {	hidemouse();
		cleardevice();
		fp=fopen("Mercury.exe","r");
		read();
		getpointer();
	       }
	else if(x>=420 && y>=250 && x<=490 && y<=280)           //81
	   {	hidemouse();
		cleardevice();
		fp=fopen("Thallium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=455 && y>=250 && x<=490 && y<=280)           //82
	   {	hidemouse();
		cleardevice();
		fp=fopen("Lead.exe","r");
		read();
		getpointer();
	       }
	else if(x>=490 && y>=250 && x<=525 && y<=280)           //83
	   {	hidemouse();
		cleardevice();
		fp=fopen("Bismuth.exe","r");
		read();
		getpointer();
		   }
	else if(x>=525 && y>=250 && x<=560 && y<=280)            //84
	   {	hidemouse();
		cleardevice();
		fp=fopen("Polonium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=560 && y>=250 && x<=595 && y<=280)           //85
	   {	hidemouse();
		cleardevice();
		fp=fopen("Astatine.exe","r");
		read();
		getpointer();
	       }
	else if(x>=595 && y>=250 && x<=360 && y<=280)            //86
	   {	hidemouse();
		cleardevice();
		fp=fopen("Radon.exe","r");
		read();
		getpointer();
	       }
	else if(x>=0 && y>=280 && x<=35 && y<=310)              //87
	   {	hidemouse();
		cleardevice();
		fp=fopen("Francium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=35 && y>=280 && x<=70 && y<=310)             //88
	   {	hidemouse();
		cleardevice();
		fp=fopen("Radium.exe","r");
		read();
		getpointer();
			       }
	else if(x>=105 && y>=410 && x<=140 && y<=440)           //89
	   {	hidemouse();
		cleardevice();
		fp=fopen("Actinium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=140 && y>=410 && x<=175 && y<=440)
	   {       hidemouse();                                            //90
		cleardevice();
		fp=fopen("Thorium.exe","r");
		read();
		getpointer();
			       }
	else if(x>=175 && y>=410 && x<=210 && y<=440)
	   {      hidemouse();                                              //91
		cleardevice();
		fp=fopen("Protactinium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=210 && y>=410 && x<=245 && y<=440)
	   {      hidemouse();                                              //92
		cleardevice();
		fp=fopen("Uranium.exe","r");
		read();
		getpointer();
	       }
	 else if(x>=245 && y>=410 && x<=280 && y<=440)
	   {      hidemouse();                                                //93
		cleardevice();
		fp=fopen("Neptunium.exe","r");
		read();
		getpointer();
	       }
	 else if(x>=280 && y>=410 && x<=315 && y<=440)
	   {      hidemouse();                                                //94
		cleardevice();
		fp=fopen("Plutonium.exe","r");
		read();
		getpointer();
	       }
	 else if(x>=315 && y>=410 && x<=350 && y<=440)
	   {	hidemouse();
		cleardevice();                                    //95
		fp=fopen("Americium.exe","r");
		read();
		getpointer();
	       }
	 else if(x>=350 && y>=410 && x<=385 && y<=440)
	   {      hidemouse();                                                //96
		cleardevice();
		fp=fopen("Curium.exe","r");
		read();
		getpointer();
	       }
	 else if(x>=385 && y>=410 && x<=420 && y<=440)
	   {       hidemouse();                                             //97
		cleardevice();
		fp=fopen("Berkelium.exe","r");
		read();
		getpointer();
	       }
	 else if(x>=420 && y>=410 && x<=455 && y<=440)
	   {       hidemouse();                                              //98
		cleardevice();
		fp=fopen("Californium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=455 && y>=410 && x<=490 && y<=440)                //99
	   {	hidemouse();
		cleardevice();
		fp=fopen("Einsteinium.exe","r");
		read();
		getpointer();
			       }
	 else if(x>=490 && y>=410 && x<=525 && y<=440)           //100
	   {	hidemouse();
		cleardevice();
		fp=fopen("Fermium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=525 && y>=410 && x<=560 && y<=440)           //101
	   {	hidemouse();
		cleardevice();
		fp=fopen("Mendelevium.exe","r");
		read();
		getpointer();
			       }
	else if(x>=560 && y>=410 && x<=595 && y<=440)             //102
	   {	hidemouse();
		cleardevice();
		fp=fopen("Nobelium.exe","r");
		read();
		getpointer();
			       }
	else if(x>=595 && y>=410 && x<=630 && y<=440)          //103
	   {	hidemouse();
		cleardevice();
		fp=fopen("Lawrencium.exe","r");
		read();
		getpointer();
			       }
	else if(x>=105 && y>=280 && x<=140 && y<=310)            //104
	   {	hidemouse();
		cleardevice();
		fp=fopen("Rutherfordium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=140 && y>=280 && x<=175 && y<=310)           //105
	   {	hidemouse();
		cleardevice();
		fp=fopen("Dubnium.exe","r");
		read();
		getpointer();
			       }
	else if(x>=175 && y>=280 && x<=245 && y<=310)           //106
	   {	hidemouse();
		cleardevice();
		fp=fopen("Seaborgium.exe","r");
		read();
		getpointer();
			       }
       else if(x>=210 && y>=280 && x<=245 && y<=310)           //107
	   {	hidemouse();
		cleardevice();
		fp=fopen("Bohrium.exe","r");
		read();
		getpointer();
			       }
	else if(x>=245 && y>=280 && x<=315 && y<=310)            //108
	   {	hidemouse();
		cleardevice();
		fp=fopen("Hassium.exe","r");
		read();
		getpointer();
			       }
       else if(x>=280 && y>=280 && x<=315 && y<=310)           //109
	   {	hidemouse();
		cleardevice();
		fp=fopen("Meitnerium.exe","r");
		read();
		getpointer();
	       }
      else if(x>=315 && y>=280 && x<=350 && y<=310)             //110
	   {	hidemouse();
		cleardevice();
		fp=fopen("Darmstadtium.exe","r");
		read();
		getpointer();
	       }                                                 //111
	else if(x>=350 && y>=280 && x<=385 && y<=310)
	   {	hidemouse();
		cleardevice();
		fp=fopen("Roentgenium.exe","r");
		read();
		getpointer();
	       }
	 else if(x>=385 && y>=280 && x<=420 && y<=310)             //112
	   {	hidemouse();
		cleardevice();
		fp=fopen("Copernicium.exe","r");
		read();
		getpointer();
	       }
	else if(x>=420 && y>=280 && x<=455 && y<=310)              //113
	   {	hidemouse();
		cleardevice();
		fp=fopen("Nihonium.exe","r");
		read();
		getpointer();
		 }
	 else if(x>=455 && y>=280 && x<=490 && y<=310)           //114
	   {	hidemouse();
		cleardevice();
		fp=fopen("Flerovium.exe","r");
		read();
		getpointer();
			       }
	 else if(x>=490 && y>=280 && x<=525 && y<=310)         //115
	   {	hidemouse();
		cleardevice();
		fp=fopen("Moscovium.exe","r");
		read();
		getpointer();

	       }
	else if(x>=525 && y>=280 && x<=560 && y<=310)         //116
	   {	hidemouse();
		cleardevice();
		fp=fopen("Livermorium.exe","r");
		read();
		getpointer();
	  }
      else if(x>=560 && y>=280 && x<=595 && y<=310)           //117
	   {	hidemouse();
		cleardevice();
		fp=fopen("Tennessine.exe","r");
		read();
		getpointer();
	       }
	else if(x>=595 && y>=280 && x<=630 && y<=310)         //118
	   {	hidemouse();
		cleardevice();
		fp=fopen("Oganesson.exe","r");
		read();
		getpointer();
	       }    */
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
while(!kbhit())
 {
	coo(&b,&x,&y);

	if(b==1)
	{
		if(x>=0 && y>=0 && x<=35 && y<=25)
		{
			hidemouse();
			periodic();
			cleardevice();
		}
       }

   }
   cleardevice();
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
else if(x>=88 && y>=229 && x<=197 && y<=256)
	   {

	     closegraph();
	     int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	       detail();
	       cleardevice();
	      getpointer();
	       }

	else if(x>=88 && y>=269 && x<=197 && y<=296)
	   {

	     closegraph();
	     int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	       menu();
	       cleardevice();
	      getpointer();
	       }
else if(x>=88 && y>=309 && x<=197 && y<=336)
	   {

		exit(0);
	       }



	}
}

cout<<"press any key to exit().";
getch();
}