//power method

#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>

void main()
{
clrscr();
cout<<setprecision(3);
int n,i,j,k;
float a[20][20], x[5],z[20],zmax,e[20],emax;
cout<<"Enter the order of matrix \n";
cin>>n;
cout<<"Enter the matrix";
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cout<<"a["<<i<<"][ "<<j <<"]= ";
cin>>a[i][j];
}
}

cout<<"Enter the eigen vector";
cout<<endl;
for(i=1;i<=n;i++)
{
cin>>x[i];
}

do{
for(i=1;i<=n;i++)
{
z[i]=0;
for(j=1;j<=n;j++)
{
z[i]= z[i] + a[i][j]*x[j];
}
}

zmax = fabs(z[1]);

for(i=2;i<=n;i++)
{
if(fabs(z[i])>zmax)
{
zmax = fabs(z[i]);
}
}

for(i=1;i<=n;i++)
{
z[i]=z[i]/zmax;
}

for(i=1;i<=n;i++)
{
e[i]=0;
e[i]= (fabs(z[i])-fabs(x[i]));
}
emax=e[1];

for(i=2;i<=n;i++)
{
 if(e[i]>emax)
 {
 emax=e[i];
 }
}

for(i=1;i<=n;i++)
{
x[i]=z[i];
}
}while(emax>0.001);
cout<<"The eigen value is"<<zmax;

cout<<"Eigen vector is";
for(i=1;i<=n;i++)
{
cout<<"x["<<i<<"] = "<<z[i]<<endl;
}

getch();
}