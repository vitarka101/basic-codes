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
  l=mid+1;

  else if(key<a[mid])
  h=mid-1;

  return(binarysearch(l,h,key)); //use only a single return statement i.e only one recursive call(see asked question in stack overflow)
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
