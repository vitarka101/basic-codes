#include<stdio.h>
#include<stdlib.h>

void setunion(int a[],int m,int b[],int n,int c[])
{
  int i=0,j=0,k=0,count=0;

  for(i=0;i<m;i++)
  c[k++]=a[i];

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(b[i]!=a[j])
      count++;
    }

    if(count==m)
    c[k++]=b[i];

    count=0;
  }
c[k]=-100;
}

int main()
{
  int a[10],b[10],c[10];
  int m,n,i,j=0;

printf("Enter the size of set 1:");
scanf("%d",&m);

printf("Enter the elements:");
  for(i=0;i<m;i++)
  scanf("%d",&a[i]);


  printf("Enter the size of set 2:");
  scanf("%d",&n);

  printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);

    setunion(a,m,b,n,c);

    while(c[j]!=-100)
    {
    printf("%d\t",c[j]);
    j++;
    }

    return 0;
}
