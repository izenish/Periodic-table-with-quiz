
//Horners rule

#include<iostream.h>
#include<conio.h>
#include<math.h>

int horners(int poly[],int n,int x)
{
int result = poly[0];
for(int i=1;i<n;i++)
{
result=result *x +poly[i];
cout<<"p"<<n-i<<"="<<result<<endl;
}
return result;
}
void main()
{
clrscr();
int poly[4],n,x=2,i;
cout<<"Enter the polynomial values\n";
for(i=0;i<4;i++)
{
cin>>poly[i];
}
n=sizeof(poly)/sizeof(poly[0]);
int y=horners(poly,n,x);
cout<<"The final value is "<<y;

getch();
}