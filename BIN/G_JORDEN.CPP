//gauss jorden

#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>

void main()
{clrscr();
cout<<setprecision(3);
int n,i,j,k;
float x[20],a[20][20],c,r,sum;

cout<<"Enter the order of matrix\n";
cin>>n;

cout<<"Enter the matrix \n";
for(i=1;i<=n;i++)
{
for(j=1;j<=n+1;j++)
{
cout<<"a["<<i<<"]["<<j<<"] = ";
cin>>a[i][j];
}
}
cout<<"Entered matrix is\n";
for(i=1;i<=n;i++)
{
for(j=1;j<=n+1;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}

//elimination

for(j=1;j<=n;j++)
{
for(i=1;i<=n;i++)
{
if(i!=j)
{
 c=a[i][j]/a[j][j];
  for(k=1;k<=n+1;k++)
  {
     r= c* a[j][k];
     a[i][k] = a[i][k] -r ;
  }

}
}
}


cout<<"Entered matrix is\n";
for(i=1;i<=n;i++)
{
for(j=1;j<=n+1;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}

//backward elimination

for(i=1;i<=n;i++)
{
x[i]=a[i][n+1]/a[i][i];
}

cout<<"Entered matrix is\n";
for(i=1;i<=n;i++)
{
cout<<"x["<<i<<"]= "<<x[i];
cout<<endl;
}



getch();
}