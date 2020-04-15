#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{int info;
struct node *pnext;
};
struct node *pfirst=NULL,*pnew,*ptemp,*plast,*pthis;
void create()
{
pnew=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&pnew->info);
}
void insbeg()
{if(pfirst==NULL)
{pfirst=plast=pnew;
plast->pnext=pfirst;
}
else
pnew->pnext=pfirst;
pfirst=pnew;
plast->pnext=pfirst;
}
void insend()
{if(pfirst==NULL)
{pfirst=plast=pnew;
plast->pnext=pfirst;
}
else
{plast->pnext=pnew;
plast=pnew;
pnew->pnext=pfirst;
}
}
void delbeg()
{
if(pfirst==NULL)
{printf("empty");
}
else if(pfirst->pnext==pfirst)
{printf("the deleted data is:",pfirst->info);
free(pfirst);
pfirst=NULL;
}
else
{ptemp=pfirst->pnext;
printf("the deleted data is:",pfirst->info);
free(pfirst);
pfirst=ptemp;
plast->pnext=pfirst;
}
}
void delend()
{
if(pfirst==NULL)
{printf("empty");
}
else if(pfirst->pnext==pfirst)
{printf("the deleted data is:",pfirst->info);
free(pfirst);
pfirst=NULL;
}
else
{pthis=pfirst;
while(pthis->pnext!=plast)
{pthis=pthis->pnext;
}
printf("the deleted data is:",plast->info);
free(plast);
plast=pthis;
plast->pnext=pfirst;
}
}
void display()
{pthis=pfirst;
while(pthis->pnext=pfirst)
{printf("%d",pthis->info);
pthis=pthis->pnext;
}
printf("%d",pthis->info);
}
void main()
{int c;
char ch;
do
{
clrscr();
printf("\n1.insrtion at the beginning \n2.insertion at the end \n3.deletion from beginning \n4.deletion from end \n5.display");
scanf("%d",&c);
switch(c)
{
case 1:
create();
insbeg();
display();
break;
case 2:
create();
insend();
display();
break;
case 3:
delbeg();
display();
break;
case 4:
delend();
display();
break;
}
printf("do you want to continue?(Y/N)");
fflush(stdin);
ch=getchar();
}
while(ch!='n');
getch();
}
