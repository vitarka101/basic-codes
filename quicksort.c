#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

int partition(int a[],int low,int high)
{
  while(1)
  {
  int pivot=a[low];
  int i=low;
  int j=high;

  while(i<=high && a[i]<=pivot)
  i++;

  while(a[j]>pivot)
  j--;

 if(i<j)
 swap(&a[i],&a[j]);

 else
 {
 swap(&a[low],&a[j]);
 return j;
}
}
}

void quicksort(int a[],int low,int high)
{
  if(low<high)
  {
    int i=partition(a,low,high);
    quicksort(a,low,i-1);
    quicksort(a,i+1,high);
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
  quicksort(a,0,n-1);

  for(i=0;i<n;i++)
  printf("%d\t",a[i]);

  return 0;

}
