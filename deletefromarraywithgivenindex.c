#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,index,n,num;
    int a[10]={0};

  printf("Enter the number of elments to be entered in array:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("Enter the element to be deleted:");
  scanf("%d",&num);

  for(i=0;i<n;i++)
  {
    if(a[i]==num)
    index=i;

    else
    {
    printf("Element not found\n");
    exit(0);
  }
  }

  for(i=index;i<n;i++)
  {
    a[i]=a[i+1];
  }

  for(i=0;i<n-1;i++)
  printf("%d\n",a[i]);

  return 0;
}
