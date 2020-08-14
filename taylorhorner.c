#include<stdio.h>
#include<stdlib.h>

double taylorhorner(int x,int n)
{
  static double s;
  if(n==0)
  return s;
  else
  {
    s=1+x*s/n;
    return taylorhorner(x,n-1);
  }

}


int main()
{

  int n1,n2;
  printf("enter the  value of x with number of terms in taylor series of e^x  :");
  scanf("%d %d",&n1,&n2);

printf("%lf \n",taylorhorner(n1,n2));
  return 0;
}
