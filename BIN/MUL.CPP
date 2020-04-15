#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[4],b1[8],b2[8],b[4],s[5];
start:
cout<<"enter the multiplicand";
for(int i=0;i<4;i++)
{
cin>>a[i];
if(a[i]!=1&&a[i]!=0)
{cout<<"invalid"<<"\n";
getch();
clrscr();
goto start;
}}
Top:
cout<<"enter the multiplier";
for(i=0;i<4;i++)
{
cin>>b[i];
if(b[i]!=1 && b[i]!=0)
{cout<<"invalid"<<"\n";
getch();
clrscr();
goto Top;
}
}
for(i=0;i<4;i++)
{if(b[i]==1)
{b1[i]=1;
}
else
{b1[i]=0;
}
}
/*b1[i]=b1[i]+b2[i];
for(i=3;i>=0;i++)
{if(b[i]==2)
{b[i]=0;
b[i-1]=b[i-1]+1;
}
}       */
cout<<"1st result:"<<"\n";
for(i=0;i<4;i++)
{
cout<<b[i];
}
for(i=3;i>=0;i--)
{
a[i]=a[i]*b[i];
}
/*
if(c==1)
{
cout<<"\n"<<"the result is"<<"\n";
for(i=0;i<4;i++)
{cout<<s[i];
}
}
else
{for(i=0;i<4;i++)
{if(s[i]==1)
{s[i]=0;
}
else
{s[i]=1;
}
}
s[3]=s[3]+1;
for(i=3;i>=0;i--)
{if(s[i]==2)
{s[i]=0;
s[i-1]=s[i-1]+1;
}
}              */
cout<<"the result is "<<"\n";
for(i=0;i<4;i++)
{cout<<a[i];
}

getch();
}