//lab 5.2 regression ko y=ax^b

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int n,i,j;
float a,b,x[20],y[20],sx=0,sy=0,sxy=0,sx2=0;
cout<<"Enter the number of terms";
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
sx=sx+log(x[i]);
sy=sy+log(y[i]);
sxy=sxy+log(x[i])*log(y[i]);
sx2=sx2+pow(log(x[i]),2);

}
b=(n*sxy-sx*sy)/(n*sx2-(sx*sx));
a=(sy-b*sx)/n;

a=exp(a);
cout<<"The equation is" <<"y="<<a<<"x^"<<b;

getch();
}