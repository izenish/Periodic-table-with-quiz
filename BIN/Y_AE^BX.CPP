#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int i,j,n;
float a,b,x[20],y[20],sx=0,sy=0,sxy=0,sx2=0;
cout<<"Enter the number of terms\n";
cin>>n;

cout<<"Enter the x values\n";
for(i=0;i<n;i++)
{
cin>>x[i];
}

cout<<"Enter the y values\n";
for(i=0;i<n;i++)
{
cin>>y[i];
}

for(i=0;i<n;i++)
{
sx=sx+x[i];
sy=sy+log(y[i]);
sx2=sx2+x[i]*x[i];
sxy=sxy+x[i]*log(y[i]);

}

b=(n*sxy-sx*sy)/(n*sx2-(sx*sx));
a=(sy-b*sx)/n;

cout<<a<<endl<<b;

a=exp(a);

cout<<"The eqn becomes "<<"y="<<a<<"e^"<<b<<"x";

getch();
}

