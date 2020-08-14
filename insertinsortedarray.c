#include<stdio.h>
#include<stdlib.h>


void insertinsort(int a[],int n,int key)
{
  int i=0,j;

  if(a[i]<a[n-1])
  {
    while(key>a[i] && i<=n-1) // if i<=n-1 not done then elements larger after the input i.e garbage value will be also checked in if statement
    i++;

    if(i==n)
    a[i]=key;

    else
    {
    for(j=n-1;j>=i;j--)
    {
      a[j+1]=a[j];
    }

    a[i]=key;
  }
}

  else
  {
    while(key<a[i] && i<=n-1)
    i++;

    if(i==n)
    a[i]=key;

    else
    {
    for(j=n-1;j>=i;j--)
    {
      a[j+1]=a[j];
    }

    a[i]=key;
  }
}
}



int main()
{
  int a[10],key;
  int n,i;

  printf("Enter the size of array:");
  scanf("%d",&n);

  printf("Enter the elements in array:\n");

  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("Enter value to be inserted:");
  scanf("%d",&key);

  insertinsort(a,n,key);

  for(i=0;i<n+1;i++)
  printf("%d\t",a[i]);

  return 0;
}
