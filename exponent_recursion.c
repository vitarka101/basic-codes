#include<stdio.h>
#include<stdlib.h>

int expo(int n,int m)
{
  if(n==0)
  return 1;

  else
  {
    return expo(n-1,m)*m;
  }
}

int main()
{
  int x,z,y;
  printf("enter the number and exponent;");
  scanf("%d %d",&x,&z);
  y=expo (z,x);
  printf("%d\n",y);

  return 0;

}
