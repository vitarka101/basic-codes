#include<stdio.h>
#include<stdlib.h>

void towerofhanoi(int n,int a,int b,int c)
{
  if(n>0)
  {
  towerofhanoi(n-1,a,c,b);
  printf("move disc from tower %d to tower %d \n",a,c);
  towerofhanoi(n-1,b,a,c);

  }


}
int tohcount(int n)
{
  if(n==0)
  return 0;

return(2*tohcount(n-1)+1);

}



int main()
{
  int n;
  int x;
  printf("Enter the no. of disc in tower 1 ");
  scanf("%d",&n);

  towerofhanoi(n,1,2,3);
  x=tohcount(n);
  printf("%d\n",x);
  return 0;
}
