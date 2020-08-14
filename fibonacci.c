#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
  if(n==1)
  return 0;
  else if(n==2)
  return 1;
  else
  return fib(n-1)+fib(n-2);
}

int main()
{
  int i,
  n,x;
  printf("Enter the no of elements :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  x=fib(i);
  printf("%d ",x);
}

  return 0;
}
