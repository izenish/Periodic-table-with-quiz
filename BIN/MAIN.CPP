#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{int info;
struct node *pnode;
};
struct node *pfirst=NULL,*pnext,*ptemp,*plast,*pthis;
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
if(pfirst==NUll)
{printf("empty");
}
else if(pfirst->pnext==pfirst)
{print("the deleted data is:",pfirst->info);
free(pfirst);
pfirst=NULL;
}
else
{ptemp=pfirst->pnext;
printf("the deleted data is:",pfirst->info);
free(pfirst);
pfirst=ptemp;
plast->pext=pfirst;
}
}
void delend()
{
if(pfirst==NULl)
{printf("empty");
}
else if(
