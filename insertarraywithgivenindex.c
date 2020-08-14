#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,index,num;
    int a[10]={0};

  printf("Enter the number of elments to be entered in array:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("\nEnter the elemnt to be entered:");
  scanf("%d",&num);
  printf("Enter the index at which element is to be entered:");
  scanf("%d",&index);

  if(index>9)
  {
    printf("Error\n");
    exit(0);
  }

  if(index>n-1)
  a[index]=num;

  else
  {
  for(i=n-1;i>=index;i--)  //IMP
  a[i+1]=a[i];

  a[index]=num;
  }

  for(i=0;i<n+1;i++) //or for(i=0;i<10;i++)
  printf("%d\n",a[i]);

//return 0;
}
