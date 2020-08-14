#include<stdio.h>
#include<stdlib.h>

void insertionsort(int a[],int n)
{
  int i,j,item;
  for(i=1;i<n;i++)
  {
    j=i-1;
    item=a[i];

    while(j>=0 && a[j]>item)
    {
      a[j+1]=a[j];
      a[j]=item;
      j--;
    }
  }
}

int main()
{
  int i,a[100]={6,5,212,1,999,78,69};
  insertionsort(a,7);
  for(i=0;i<7;i++)
  printf("%d\t",a[i]);

  return 0;
}
