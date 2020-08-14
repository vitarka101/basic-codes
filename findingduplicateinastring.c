#include<stdio.h>
#include<stdlib.h>

int main()
{
  char a[20];
  int i,b[26]={0},temp;

  printf("Enter a string:");

  scanf("%s",a);

  for(i=0;a[i]!='\0';i++)
  {

    temp=a[i];
    b[temp-97]++;

  }

  for(i=0;i<26;i++)
  {
  if(b[i]!=0)
  printf("The character %c occurs %d times\n",i+97,b[i]);
}
}
