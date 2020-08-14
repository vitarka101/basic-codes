#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char a[20],temp;
  int i,k,l;

  printf("Enter a string:");

  scanf("%s",a);
  
  k=(strlen(a))/2;
  for(i=0;i<k;i++)
  {
    temp=a[i];
    a[i]=a[strlen(a)-1-i];
    a[strlen(a)-1-i]=temp;
  }

  printf("%s",a);

  return 0;
}
