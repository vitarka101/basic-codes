#include<stdio.h>
#include<stdlib.h>

void perm(char s[],int k)
{
  static char res[10];
  static int a[10]={0};
  int i;

  for(i=0;s[i]!='\0';i++)
  {
    if(a[i]==0)
    {
      res[k]=s[i];
      a[i]=1;
      perm(s,k+1);
      a[i]=0;
    }
  }

  if(s[k]=='\0')
  {
  res[k]='\0';
  printf("%s\n",res);
  }
}

int main()
{
  char s[10];
  printf("Enter a string:");
  scanf("%s",s);
  perm(s,0);
  return 0;
}
