#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>
struct node
{int info;
struct node *lchild, *rchild;
};
struct node *root=NULL, *pnew,*pthis,*ppthis;
void create()
{int data;
pnew=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&data);
pnew->info=data;
pnew->lchild=NULL;
pnew->rchild=NULL;
}
void inorder(struct node *p)
{if(p!=NULL)
{inorder(p->lchild);
printf("%d",p->info);
inorder(p->rchild);
}
}
void preorder(struct node *p)
{if(p!=NULL)
{
 printf("%d",p->info);
 preorder(p->lchild);
 preorder(p->rchild);
 }
}
void postorder(struct node *p)
{
 if(p!=NULL)
 {
  postorder(p->lchild);
  postorder(p->rchild);
  printf("%d",p->info);
 }
}
void main()
{clrscr();
int n,i, choice;
char ch;
start:
clrscr;
printf("\n1.create \n2.inorder \n3.preorder \n4.postorder");
printf("enter the choice");
scanf("%d",&choice);

printf("enter the number of nodes");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
create();
if(root==NULL)
{root=pnew;
}
else
pthis=root;
while(pthis!=NULL)
{ppthis=pthis;
if(pnew->info<pthis->info)
{pthis=pthis->lchild;
if(pthis==NULL)
 {
  ppthis->lchild=pnew;
 }
else
 {pthis=pthis->rchild;
  if(pthis==NULL)
   {ppthis->rchild=pnew;
   }
  }
 }      }
 switch(choice)
 {case 1:
 inorder(root);
 break;
 case 2:
 preorder(root);
 break;
 case 3:
 postorder(root);
 break;
 default:
 printf("\nInvalid");
 break;
 }
 printf("Do you want to continue(y/n)?");
 scanf("%c",&ch);
if(ch=='y' || ch== 'Y')
{goto start;
}
else
{exit(0);
}

getch();
}}

