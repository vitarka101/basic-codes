#include<stdio.h>
#include<stdlib.h>


void duplicate(int a[],int n)
{
  int i,j,c[10],count=0,temp=0,k=0;

  for(i=0;i<n;i++)
  {
   if(a[i]!=temp)  //checking the last duplicate
{
    for(j=i+1;j<n;j++)     //O(n)=n^2 here but should be n as it is sorted array(bari)
    {
      if(a[i]==a[j])
      count++;
      temp=a[i];
    }

    if(count>0)
    printf("The element %d is present %d times\n",a[i],count+1);

    count=0;   //IMP
}
  }
}




int main()
{

  int i,n,a[20];

  printf("Enter the sze of array:");
  scanf("%d",&n);

  printf("Enter the elements in sorted order:");

  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  duplicate(a,n);

  return 0;
}
