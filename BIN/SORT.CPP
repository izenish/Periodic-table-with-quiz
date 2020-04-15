#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int a[10],i=0,j,temp,n;
printf("enter the number of elements");
scanf("%d",&n);
printf("\nenter the datas to be sorted:");
for(i=0;i<n;i++)
{
 scanf("%d\t",&a[i]);
}
for(i=0;i<n;i++)
{ for(j=0;j<n-i-1;j++)
  {if(a[j]>a[j+1])
   {temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
   }
  }
 }
 printf("the sorted elements are:");
 for(i=0;i<n;i++)
 {printf("%d",a[i]);
 }
 getch();
 }