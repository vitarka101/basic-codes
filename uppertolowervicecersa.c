#include<stdio.h>
#include<stdlib.h>

int main()
{
  char a[20];
  int i,n;

  printf("Enter the string:");
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
  if(a[i]>=65 && a[i]<=90)   //In char the value of numbers(0-9) ranges from 48 to 57 hence input as a69b will be A69B
  a[i]+=32;

  else if(a[i]>=97 && a[i]<=122)
  a[i]-=32;
  }

  printf("%s",a);
}
