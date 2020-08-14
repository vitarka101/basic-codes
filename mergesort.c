#include<stdio.h>
#include<stdlib.h>

void merge(int a[],int low,int mid,int high)
{
  int i,j,k,b[100];
  i=low;  //starting Index of the first sorted array
  j=mid+1; //starting Index of the second sorted array
  k=low;  //Index where element is to be put

  while(i<=mid && j<=high)
  {
    if(a[i]>a[j])
    b[k++]=a[j++];

    else
    b[k++]=a[i++];
  }

  while(i<=mid)
  b[k++]=a[i++];

  while(j<=high)
  b[k++]=a[j++];

  for(i=low;i<=high;i++)
  a[i]=b[i];
}


void mergesort(int a[],int low,int high)
{
  if(low<high)
  {
    int mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,mid,high);
  }
}

int main()
{
  int i,a[100]={7,6,5,4,3,2,1};
  mergesort(a,0,6);
  for(i=0;i<7;i++)
  printf("%d\t",a[i]);

  return 0;
}
