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
for(i=0;i<n-1;i++)
{ for(j=i+1;j<n;j++)
  {if(a[i]>a[j])
   {temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
  }
 }
 printf("the sorted elements are:");
 for(i=0;i<n;i++)
 {printf("%d",a[i]);
 }
 getch();
 }