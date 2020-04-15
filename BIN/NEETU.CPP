#include<stdio.h>
#include<conio.h>
void main()
{int prime=0,i,n,count=0,sum=0;
for(i=1;i<=200;i++)
{for(n=2;n<i;n++)
{if(i%n==0)
{prime==1;
break;
}
if(prime==0)
{sum=sum+n;
count=count++;
}
printf("%d\t%d",sum,count);
getch()
}
}
}