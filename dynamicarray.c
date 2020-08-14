#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i;
  int *a;

  a=(int *)malloc(5*sizeof(int));

  for(i=0;i<5;i++)
  {
  scanf("%d",&a[i]);//Just like an normal array we have to declare here
  }

  printf("\n");

  for(i=0;i<3;i++)
  {
  printf("%d\n",a[i]);
  }

return 0;
}
