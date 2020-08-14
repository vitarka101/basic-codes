#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
  int a[100];
  int top;
};

int parenthesismatch(struct stack s,char *str)//char str[],Pointer to an array
{
  int garbage,i=0,count=0;
  if(strlen(str)==0)
  {
  printf("NO PARENTHESIZED EXPRESSION AS INPUT\n");
  return -1;
  }

  else
  {
  while(str[i]!='\0')
  {
    if(str[i]=='(')
    {
    s.a[++s.top]='(';
    count++;
    }

    else if(str[i]==')' && s.top!=-1)
    {
    garbage=s.a[s.top--];
    count++;
    }
    else if(str[i]==')' && s.top==-1)//Since this code dosent check proper parenthesization
    {
      garbage=s.a[s.top--];//Nothing in stack still we are decremnting here(WORKS)
      count++;
    }
    i++;
  }

  if(s.top==-1 && count!=0)
  return 1;
  else if(s.top!=-1 && count!=0)
  return 0;

  if(count==0)//To check if atleast input was given as a parenthesis expression
  {
      printf("NO PARENTHESIZED EXPRESSION AS INPUT\n");
      return -1;
  }
  }

}


int main()
{
  struct stack s;
  s.top=-1;
  int returnval;
  char str[10]={'\0'};
  printf("Enter a string:");
  scanf("%s",str);

  returnval=parenthesismatch(s,str);
  if(returnval==1)
  printf("It is a parenthesis matching Expression\n");

  else if(returnval==0)
  printf("It is not a parenthesis matching Expression\n");

  return 0;
}
