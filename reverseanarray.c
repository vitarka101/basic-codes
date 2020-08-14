#include<stdio.h>
#include<stdlib.h>

void reverse(int a[],int n)
{
  int i,temp;
  for(i=0;i<n/2;i++)
  {
  temp=a[n-1-i];
  a[n-1-i]=a[i];
  a[i]=temp;
  }
}


int main()
{
  int a[10],i,n;
  printf("Enter the size of array:");
  scanf("%d",&n);

  printf("Enter the elements:\n");

  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  reverse(a,n);

  for(i=0;i<n;i++)
  printf("%d\t",a[i]);

  return 0;
}
