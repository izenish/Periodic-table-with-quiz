//linear interpolation lab4

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();

int n,i,j;
float a[20],b[20],x,y,x0,x1,y0,y1;
cout<<"Enter the number of terms \n" ;
cin>>n;

cout<<"Enter the value of x";
for(i=0;i<n;i++)
{
cin>>a[i];
}

cout<<"Enter the value of fx";
for(i=0;i<n;i++)
{
cin>>b[i];
}

cout<<"Enter the interpolation value\n";
cin>>x;

cout<<"\nThe entered table is \n";
cout<<"x\t";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
cout<<endl;

cout<<"y\t";
for(i=0;i<n;i++)
{
cout<<b[i]<<"\t";
}
cout<<endl;

for(i=0;i<n;i++)
{
if(x>a[i]&&x<a[i+1])
{
x0=a[i];
x1=a[i+1];
y0=b[i];
y1=b[i+1];
}
}
y=y0 + (x-x0)*((y1-y0)/(x1-x0));

cout<<"The interpolation value is "<<y;


getch();
}