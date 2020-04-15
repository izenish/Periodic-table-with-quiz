
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int info;
struct node *lchild;
struct node *rchild;
}*pthis,*ppthis,*pnew,*root=NULL;
void create()
{pnew=(struct node*)malloc(sizeof(struct node));

printf("enter data");
scanf("%d",&pnew->info);
pnew->lchild=NULL;
pnew->rchild=NULL;
}
void inorder( struct node *pthis)
{if(pthis!=NULL)
{inorder(pthis->lchild);
printf("%d",pthis->info);
 inorder(pthis->rchild);
 }
 }

 void main()
 { int n;
 clrscr();
 printf("enter the num of data");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
{ create();
if(root==NULL)
{
root=pnew;
}
else
{pthis=root;
while(pthis!=NULL)
{ppthis=pthis;
if(pnew->info<pthis->info)
{pthis=pthis->lchild;
if(pthis==NULL)
{ppthis->lchild=pnew;
}}
else
{pthis=pthis->rchild;
if(pthis==NULL)
{ppthis->rchild=pnew;
}}
}
}
}
 printf("the inorder traversal");
 inorder(root);

 getch();
 }
