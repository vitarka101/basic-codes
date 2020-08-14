// IMPLEMENTATION OF PASCALS TRIANGLE

//ncr=n-1cr-1+n-1cr

#include<stdio.h>
#include<stdlib.h>

int combination(int n,int r)
{
  if(r>n)
  return -1;
  
  if(n!=0 && r==0)
  return 1;
  if(n!=0 && r==n)
  return 1;
  else
  return combination(n-1,r-1)+combination(n-1,r);
}

int main()
{
  int n,r,s;
  printf("enter the value of n and r:");
  scanf("%d %d",&n,&r);
  s=combination(n,r);
  printf("%d\n",s);

  return 0;
}
