//lab 5 regression linear i.e. y=a+bx

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int n,i,j;
float x[20],y[20],b,a,sx=0,sy=0,sx2=0,sxy=0;
cout<<"Enter the number of terms\n";
cin>>n;

cout<<"Enter the values of x\n";
for(i=0;i<n;i++)
{
cin>>x[i];
}

cout<<"Enter the values of y\n";
for(i=0;i<n;i++)
{
cin>>y[i];
}

for(i=0;i<n;i++)
{
  sx=sx+x[i];
  sy=sy+y[i];
  sx2=sx2+x[i]*x[i];
  sxy=sxy+x[i]*y[i];
}

b=(n*sxy-sx*sy)/(n*sx2-(sx*sx));
a=(sy-b*sx)/n;

cout<<"The final eqn becomes y="<<a<<"+"<<b<<"x";



getch();
}