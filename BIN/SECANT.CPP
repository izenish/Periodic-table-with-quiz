//secant method lab 3.2

#include<iostream.h>
#include<conio.h>
#include<math.h>

#define f(x) x*x -4*x -10
#define e 0.00001

void main()
{
clrscr();
float x0,x1,x2,f0,f1,f2;

cout<<"Enter the inital guesses \n";
cin>>x1>>x2;

do{
f1=f(x1);
f2=f(x2);
x0=(f2*x1-f1*x2)/(f2-f1);
f0=f(x0);

x1=x2;
x2=x0;

f1=f2;
f2=f0;

}while(fabs(f0)>e);

cout<<"Root is "<<x0;


getch();
}