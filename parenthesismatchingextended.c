#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
  int size;
  char *a;
  int top;
};

int expression(char x)
{
  switch(x)
  {
    case '(':return 1;
    case ')':return -1;
    case '{':return 2;
    case '}':return -2;
    case '[':return 3;
    case ']':return -3;
    default : return 0;
  }
}

int parenthesismatch(struct stack s,char str[])
{
  int i=0,garbage;
  while(str[i]!='\0')
  {
    printf("%d\n",expression(str[i]));
    if(expression(str[i])>0)
    s.a[++s.top]=(str[i]);
    if(expression(str[i])<0 && expression(s.a[s.top])==(-1*expression(str[i])))
    garbage=s.a[s.top--];
    else if(expression(str[i])<0 && expression(s.a[s.top])!=(-1*expression(str[i])))//Use else if only otherwise the prevoius if statement top gets decremented and again checks with this case where it becomes true
    break;

    i++;
  }

  if(s.top==-1)
  return 1;
  else
  return 0;
}

int main()
{
  struct stack s;
  s.top=-1;
  int returnval;
  char str[100];
  printf("Enter a string:");
  scanf("%s",str);
  s.size=strlen(str);
  s.a=(char *)malloc(s.size*sizeof(int));
  //printf("%d\n",strlen(str));

  returnval=parenthesismatch(s,str);
  if(returnval==1)
  printf("It is a parenthesis matching Expression\n");

  else if(returnval==0)
  printf("It is not a parenthesis matching Expression\n");

  return 0;
}
