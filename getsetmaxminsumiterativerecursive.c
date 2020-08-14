#include<stdio.h>
#include<stdlib.h>

int get(int index,int a[],int n)
{
  if(index<0 || index>n-1)
  return -1;

  else
  return a[index];
}


void set(int index,int a[],int n,int num)
{
  if(index<0 || index>n-1)
  printf("Index not found\n");

  else
  a[index]=num;
}


int max(int a[],int n)
{
  int i,m=a[0];
  for(i=1;i<n;i++) //start i with 1
  {
    if(a[i]>m)
    m=a[i];
  }

  return m;
}

int min(int a[],int n)
{
  int i,m=a[0];
  for(i=1;i<n;i++) //start i with 1
  {
    if(a[i]<m)
    m=a[i];
  }

  return m;
}

int iterativesum(int a[],int n)
{
  int i,sum=0;
  for(i=0;i<n;i++)
  sum+=a[i];

  return sum;
}


int recursivesum(int a[],int n,int sum)
{
  if(n<0)
  return sum;

  else
  return(recursivesum(a,n-1,sum+a[n]));
}


int main()
{
  int a[20],n,i,index,returnvalue,num;
  printf("Enter the size of array:");
  scanf("%d",&n);

  printf("Enter the elements");

  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("Get element at any index\n");

  printf("Enter the index:");
  scanf("%d",&index);

  returnvalue=get(index,a,n);
  if(returnvalue >0)
  printf("\nValue at index %d is: %d\n\n",index,returnvalue);

  else
  printf("Element not found");

  printf("set element at any index\n");
  printf("Enter the index and element:\n");
  scanf("%d%d",&index,&num);

  set(index,a,n,num);
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);

  printf("\n\nMax element is %d\n\n",max(a,n));

  printf("Min element is %d\n\n",min(a,n));

  printf("Iterative sum of all element in array is:%d\n\n",iterativesum(a,n));

  printf("Recursive sum of all element in array is:%d\n\n",recursivesum(a,n,0));

  return 0;

  }
