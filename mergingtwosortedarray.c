#include<stdio.h>
#include<stdlib.h>

void merge(int a[],int m,int b[],int n,int c[])
{
  int i=0,j=0,k=0;

  while(i<m && j<n)
  {
    if( a[i]<b[j] )
    {
      c[k++]=a[i++];
    }

    else if(a[i]==b[j])
    {
      c[k]=b[j];
      i++;
      j++;
      k++;
    }

    else
    {
      c[k++]=b[j++];
    }
  }


  for(;i<m;i++) //remaining elemnts if present in array 1 should be copied
  c[k++]=a[i];

  for(;j<n;j++) //remaining elemnts if present in array 2 should be copied
  c[k++]=b[j];
}


int main()
{
  int a[10],b[10],c[20];
  int i,m,n;

  printf("Enter the size of array 1:");
  scanf("%d",&m);

  printf("Enter the elements:");

  for(i=0;i<m;i++)
  scanf("%d",&a[i]);

  printf("Enter the size of array 2:");
  scanf("%d",&n);

  printf("Enter the elements:");

  for(i=0;i<n;i++)
  scanf("%d",&b[i]);

  merge(a,m,b,n,c);


for(i=0;i<m+n;i++)
printf("%d\t",c[i]);


return 0;

}
