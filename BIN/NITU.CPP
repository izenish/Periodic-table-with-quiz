#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[4],i,j;
 begin:
 printf("\n Enter 4 bit binary digit:");
 for(i=0;i<=3;i++)
 {
 scanf("%d",a[i]);
 if(a[i]==0 || a[i]==1)
 {continue;
 }
 else
 {printf("error");
 goto begin;
 }
}
printf("the 1's complement of given binary number is:\n");
for(i=0;i<=3;i++)
{a[i]=1-a[i];
printf("%d",a[i]);
}
printf("\n the 2's complement of the given binary number is:\n");
for(i=3;i>=0;i--)
{
a[i]=a[i]+1;
if(a[i]>1;
{
a[i]=0;
continue;
}
else
{
break;
}
}
for(i=0;i<=3;i++)
{printf("%d",a[i]);
}
getch();
}