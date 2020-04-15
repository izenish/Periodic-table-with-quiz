#include <iostream.h>
#include <conio.h>
#include <alloc.h>
#include <process.h>
int i;
struct node{
int info;
struct node *lchild;
struct node *rchild;
}*pnew,*root=NULL,*ppthis,*pthis;
void neww()
{
cout<<"ENTER THE NEW NODE";
pnew=(struct node*)malloc(sizeof(struct node));
cin>>pnew->info;
pnew->lchild=NULL;
pnew->rchild=NULL;
}
void inorder(struct node *root)
{if(root!=NULL)
{inorder(root->lchild);
cout<<root->info<<endl;
inorder(root->rchild);
}}
void preorder(struct node *root)
{
if(root!=NULL)
{
cout<<root->info<<endl;
preorder(root->lchild);
preorder(root->rchild);
}}
void pstorder(struct node *root)
{
if(root!=NULL)
{

pstorder(root->lchild);
pstorder(root->rchild);
cout<<root->info<<endl;
}}

void main()
{int c,no;
clrscr();
X:

cout<<"your choices are \n 1)Create tree \n2)DIsplay"<<endl;
cin>>c;
switch(c)
{
case 1:
cout<<"Number of data";
cin>>no;
for(i=0;i<no;i++)
{neww();
if(root==NULL)
pnew=root;
else
{
pthis=root;
while(pthis!=NULL)
ppthis=pthis;
{if(pnew->info<pthis->info)
{pthis=pthis->lchild;
if(pthis==NULL)
ppthis->lchild=pnew;
}
else
{
pthis=pthis->rchild;
if(pthis==NULL)
ppthis->rchild=pnew;
 }}}}
 break;
 case 2:
 inorder(root);
 break;
 default:
 cout<<"wrong option try again";
 goto X;
 }
 cout<<"want to try again? 1/0";
 cin>>no;
 if(no==1)
 goto X;
 else
 exit(0);
 }