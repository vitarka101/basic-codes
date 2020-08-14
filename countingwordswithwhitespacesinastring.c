#include<stdio.h>

int main()
{
  char a[20];
  int i,n,count=0;

  printf("Enter the string:");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]!=' ')
    count++;
  }

  printf("%d\n",count);
}
