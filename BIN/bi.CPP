//Bisection method

#include<iostream.h>
#include<conio.h>
#include<math.h>

#define f(x) x*x - 4*x -10
#define e 0.00001

void main()
{
up:
clrscr();
float x0,x1,x2,f0,f1,f2;
cout<<"Enter the initial guesses\n";
cin>>x1>>x2;

f1=f(x1);
f2=f(x2);

if(f1*f2>0)
{
cout<<"Invalid\n";
goto up;
}

else
{
up1:
x0=(x1+x2)/2;
f0=f(x0);
if(f1*f0<0)
{
x2=x0;
f2=f0;
}
else
{
x1=x0;
f1=f0;
}
}
if(fabs(f0)<=e)
{
cout<<"Root is "<<x0;
}
else
{
goto up1;
}




getch();
}