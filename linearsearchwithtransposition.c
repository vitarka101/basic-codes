#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[10];
  int i,n,num,temp;

  printf("Enter the elements in array:");
  scanf("%d",&n);

  printf("Enter the elements");

  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("Enter the element to be searched:");
  scanf("%d",&num);

  for(i=0;i<n;i++)
  {
    if(num==a[i])
    {
      a[i-1]=temp;
      a[i-1]=a[i];
      a[i]=temp;

    printf("Element found at index:%d\n",i);
   }
  }

  for(i=0;i<n;i++)
  printf("%d\n",a[i]);

  return 0;
}
