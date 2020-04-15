#include <iostream.h>
#include <conio.h>
template <class T>
T arrangement (T z[])
{
T dummy;
for(int i=0;i<10;i++)
{for(int j=i+1;j<10;j++)
{
if (z[i]<z[j])
{
dummy=z[i];
z[i]=z[j];
z[j]=dummy;
}}}
return (0);
}
void main()
{
clrscr();
int x[10];
float y[10];
cout<<"enter the integers";
for(int i=0;i<10;i++)
{cin>>x[i];
}
arrangement(x);
cout<<"For Decending Order\n";
for(i=0;i<10;i++)
{cout<<x[i];
cout<<"\n";
}
cout<<"For Ascending Order\n";
for(i=9;i>=0;i--)
{
cout<<x[i];
cout<<"\n";
}
cout<<"enter the floats";
for(i=0;i<10;i++)
{cin>>y[i];
}
arrangement(x);
cout<<"For Decending Order\n";
for(i=0;i<10;i++)
{cout<<y[i];
cout<<"\n";
}
cout<<"For Ascending Order\n";
for(i=9;i>=0;i--)
{
cout<<y[i];
cout<<"\n";
}


getch();
}
