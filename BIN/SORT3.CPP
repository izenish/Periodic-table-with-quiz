#include<stdio.h>
#include<conio.h>
void main()

{clrscr();

int a[10],k,i,j,temp,n;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the data to be sorted:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{temp=a[i];
 for(j=0;j<i-1;j++)
 {if(a[i]<a[j])
  {for(k=1;k>=j+1;k--)
  {a[k]=a[k-1];
  }
  a[k]=temp;
  }
  }
  }
  printf("the data sorted are:");
  for(i=0;i<n;i++)
  {printf("%d",a[i]);
  }
  getch();
  }