#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
	  FILE *fp;
	  char ch;
void e118()
{
	cleardevice();
	fp=fopen("Oganesson.exe","r");
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
