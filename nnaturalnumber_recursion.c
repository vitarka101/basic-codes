#include<stdio.h>
#include<stdlib.h>

/*void sumn(int n,int sum)
{
  if(n==0)
  printf("%d\n",sum);

  else
  {
  sum+=n;
  sumn(n-1,sum);
  }

}*/

int sumn(int n)
{
  if(n==0)
  return 0;
  else
  return (sumn(n-1)+n);
}

int main()
{
  int n,t;
  printf("enter a number:");
  scanf("%d",&n);
//  sumn(n,0);
  t=sumn(n);
  printf("%d\n",t);

  return 0;
}
