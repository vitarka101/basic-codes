#include<stdio.h>
#include<stdlib.h>

void iterativefib(int n)
{
  int i,temp,a,b;
  for(i=1;i<=n;i++)
  {
  if(i==1)
  {
    a=0;
    //printf("%d\t",a);
  }

  else if(i==2)
  {
  b=1;
  //printf("%d\t",b);
}

  else
  {
    temp=b;
    b=b+a;
    a=temp;
    //printf("%d\t%d\t",a,b);
  }

}

printf("\n%d\n",b);
}



int main()
{
  int n;
  printf("Enter value of n:");
  scanf("%d",&n);
  iterativefib(n);

  return 0;
}
