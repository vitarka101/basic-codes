#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[5],n,i,j;
  printf("Enter the dimension(n) of square matrix:");
  scanf("%d",&n);


  printf("Enter the Diagonal elements:");

  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
    if(i==j)
    printf("%d\t",a[i-1]);
    else
    printf("0\t");
  }
  printf("\n");
}


return 0;

}
