#include<stdio.h>
#include<stdlib.h>

int a[10];

int binarysearch(int l,int h,int key)
{
  int mid;
  mid=(l+h)/2;
  if(l<=h)                             //Writing this only returns -1 in else case
  {
  if(key==a[mid])
  return mid;

  else if(key>a[mid])
  return(binarysearch(mid+1,h,key));//When binarysearch function is not called recursively in return then index value not showing up

  else if(key<a[mid])
  return(binarysearch(l,mid-1,key));
 }

  else
  return -1;
}

int main()
{
  int x,i,n,key;
  printf("Enter the size of array:");
  scanf("%d",&n);

  printf("Enter the elements:");

  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("Enter the element to be searched:");
  scanf("%d",&key);

  x=binarysearch(0,n-1,key);

  if(x>=0)
  printf("Element found at index:%d\n",x);

  else if(x==-1)
  printf("Element not found\n");

  return 0;
}
