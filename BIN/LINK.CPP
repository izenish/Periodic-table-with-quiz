#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{int info;
struct node *pnext,*prev;
};
struct node *pfirst,*plast,*pnew,*pthis,*ptemp;
void data()
{
 pnew=(struct node*)malloc(sizeof(struct node*));
 printf("enter the data");
 scanf("%d",&pnew->info);
}
void insbeg()
{

 if(pfirst==NULL)
  {pfirst=plast=pnew;
   plast->pnext=pfirst;
   pfirst->prev=plast;
  }
  else
  {pnew->pnext=pfirst;
   pfirst->prev=pnew;
   pfirst=pnew;
   pfirst->prev=plast;
   plast->pnext=pfirst;
  }
 }
 void insend()
 {
  if(pfirst==NULL)
  {
   pfirst=plast=pnew;
   pfirst->pnext=plast;
   plast->prev=pfirst;
  }
  else
  {
   plast->pnext=pnew;
   pnew->prev=plast;
   plast=pnew;
   plast->pnext=pfirst;
   pfirst->prev=plast;
  }
 }
 void delbeg()
 {
 if(pfirst==NULL)
  {
   printf("the list is empty");
  }
  else if(pfirst->pnext==pfirst)
  {printf("the deleted item is ",pfirst->info);
   free(pfirst);
   pfirst=NULL;
  }
  else
  {printf("the deleted item is",pfirst->info);
  ptemp=pfirst->pnext;
  free(pfirst);
  pfirst=ptemp;
  pfirst->prev=plast;
  plast->pnext=pfirst;
  }
  }
  void delend()
  {
  if(pfirst==NULL)
  {printf("the list is empty");
  }
  else if(pfirst->pnext==pfirst)
  {printf("the deleted item is", pfirst->info);
  free(pfirst);
  pfirst=NULL;
  }
  else
  {printf("the deleted item is",pfirst->info);
  ptemp=plast->prev;
  free(plast);
  plast=ptemp;
  plast->pnext=pfirst;
  pfirst->prev=plast;
  }
  }
  void display()
  {pthis=pfirst;
  while(pthis->pnext!=pfirst)
  {printf("%d",pthis->info);
  pthis=pthis->pnext;
  }
  printf("%d",pthis->info);
  }
  void main()
  {int c;
  char ch;
  do
  {clrscr();
  printf("\n1.insertion at the beginning \n2.insertion at the end \n3.deletion from the beginning \n4.deletion from the end ");
  printf("\nenter the choice");
  scanf("%d",&c);
  switch(c)
  {
  case 1:
  data();
  insbeg();
  display();
  break;
  case 2:
  data();
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
  printf("do you want to continue(y/n)?");
  fflush(stdin);
  ch=getchar();
  }
  while(ch!='n');
  getch();
  }
