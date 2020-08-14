#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
  if(n==0)
  return 1;

  else
  return fact(n-1)*n;//NOT A TAIL RECURSION SICE * IS PRESENT(I.E A STATEMENT AFTER CALLING FUNCTION)
}


int main()
{
  int f,n;
  printf("Enter a number:");
  scanf("%d",&n);
  f=fact(n);
  printf("%d\n",f);

  return 0;
}
