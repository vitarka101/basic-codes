#include<stdio.h>
#include<stdlib.h>

void bubblesort(int a[],int n)
{
  int i,j,temp,flag=0;
  for(i=0;i<n-1;i++)
  {
    flag=0;     // Adaptive
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])   //Ascending order
      {
        flag=1;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
    if(flag==0)
    break;
  }
}

int main()
{
  int i,n,a[100];
  printf("Enter the number of elemenets:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  bubblesort(a,n);

  for(i=0;i<n;i++)
  printf("%d\t",a[i]);

  return 0;

}
