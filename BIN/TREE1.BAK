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
clrscr;
do
{printf("enter the number of nodes");
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
 }
 }             }
 printf("Do you want to continue(y/n)?");
 fflush(stdin);
 scanf("%c",&ch);
 }
while(ch=='y' || ch== 'Y');
printf("Inorder traversal is:\n");
inorder(root);
printf("\n");
printf("Preorder traversal is:\n");
preorder(root);
printf("\n");
printf("Postorder traversal is:\n");
postorder(root);
getch();
}