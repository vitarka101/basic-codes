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


int fact(int n)
{
  if(n==0)
  return 1;

  else
  {
    return n*fact(n-1);
  }
}




float taylor(int n,int x)
{
  if(n==1)
  return 1;

  else
  {
    return taylor(n-1,x)+expo(n-1,x)/fact(n-1);
  }
}


int main()
{
float a;
  int n1,n2;
  printf("enter the number of terms in taylor series of e^x with value of x :");
  scanf("%d %d",&n1,&n2);
  a=taylor(n1,n2);

printf("%f",a);
  return 0;
}
