#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{int info;
struct node *prev,*pnext;
};
struct node *pfirst=NULL,*pnew,*pthis,*ptemp;
void data()
{int n;
pnew=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
 scanf("%d",&n);
 pnew->info=n;
 }
 void insbeg()
 {if(pfirst==NULL)
 {pfirst=pnew;
 pnew->pnext=NULL;
 pnew->prev=NULL;
 }
 else
 {pnew->pnext=pfirst;
 pfirst->prev=pnew;
 pfirst=pnew;
 pfirst->prev=NULL;
 }
 }
 void insend()
  {if(pfirst==NULL)
 {pfirst=pnew;
 pnew->pnext=NULL;
 pnew->prev=NULL;
 }
 else
 {pthis=pfirst;
 while(pthis->pnext!=NULL)
 {pthis=pthis->pnext;}

 pthis->pnext=pnew;
 pnew->prev=pthis;
 pthis->pnext=NULL;

 }}
 void delbeg()
 {
 if(pfirst==NULL)
 {printf("the list is empty");
 }
 else if(pfirst->pnext==NULL)
{ printf("the deleted data is:",pfirst->info);
free(pfirst);
pfirst=NULL;
}
else
{ptemp=pfirst->pnext;
printf("the deleted data is:",pfirst->info);
free(pfirst);
pfirst=ptemp;
pfirst->prev=NULL;
}
}
void delend()
{
 if(pfirst==NULL)
 {printf("the list is empty");
 }
 else if(pfirst->pnext==NULL)
{ printf("the deleted data is:",pfirst->info);
free(pfirst);
pfirst=NULL;
}
pthis=pfirst;
 while(pthis->pnext!=NULL)
 {pthis=pthis->pnext;
 }

 ptemp=pthis->prev;
 printf("the deleted item is:",pthis->info);
 free(pthis);
 ptemp->pnext=NULL;
 }


 void display()
 {if(pfirst==NULL)
 {printf("list is empty");
 }
 else
 {pthis=pfirst;
 while(pthis->pnext!=NULL)
 {printf("%d",pthis->info);
 pthis=pthis->pnext;
 }
 printf("%d",pthis->info);
 }
 }

void main()
  {int choice;
  char ch;
  do
  {clrscr();
  printf("\n1.insbeg   \n2.insend  \n3.delbeg  \n4.delend");
  printf("\nenter the choice");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  insbeg();
  display();
  break;
  case 2:
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
  printf("do you want to continue (y/n)?");
  fflush(stdin);
  ch=getchar();
  }
  while(ch!='n');
  getch();
  }