//lab 3.3 newton raphsons method

#include<iostream.h>
#include<conio.h>
#include<math.h>

#define f(x) x*x -4*x -10
#define df(x) 2*x-4
#define e 0.00001

void main()
{
float x0,x1,f0,f1,df0;
cout<<"Enter the initial guess\n" ;
cin>>x0;

do{
f0=f(x0);
df0=df(x0);

x1=x0-(f0/df0);
f1=f(x1);

x0=x1;
f0=f1;

}while(fabs(f0)>e);
cout<<"Root is "<<x0;
getch();
}
