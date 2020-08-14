//This code only implements those operators which have associativity from right tot left

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct stack
{
  //char a[100];
  int a[100];
  int top;
};

int precedence(char x)
{
  switch(x)
  {
    case '+':
    case '-':return 1;

    case '*':
    case '/':return 2;

    case '^':return 3;

    default:return 0;
  }

}

int evaluation(char postfix[])
{
  int symbol;
  struct stack p;
  p.top=-1;
  int i=0;
  int secondoperand,firstoperand;
while(postfix[i]!='\0')
{
  symbol=postfix[i];
  if(isalnum(symbol))
  {
  p.a[++p.top]=(symbol-'0');//convert char to int
   }
  else
  {
    secondoperand=p.a[p.top--];
    firstoperand=p.a[p.top--];

  switch(symbol)
  {
    case '+':p.a[++p.top]=(firstoperand+secondoperand);
            break;
    case '-': p.a[++p.top]=(firstoperand-secondoperand);
            break;
    case '*':p.a[++p.top]=(firstoperand*secondoperand);
            break;
    case '/':p.a[++p.top]=(firstoperand/secondoperand);
            break;
  }
  }
  i++;
}

return(p.a[p.top]);

}

void infixtopostfix(char infix[],char postfix[])
{
  struct stack s;
  s.top=-1;
  int i=0,k=0;
  char symbol;

  while(infix[i]!='\0')
  {
    symbol=infix[i];
    if(isalnum(symbol))
    postfix[k++]=symbol;

    else if(symbol=='(')
    s.a[++s.top]=symbol;

    else if(symbol==')')
    {
      while(s.a[s.top]!='(')
      postfix[k++]=s.a[s.top--];

      s.top--;
    }

    else if(precedence(symbol)>precedence(s.a[s.top]))
    s.a[++s.top]=symbol;

  else if(precedence(symbol)<=precedence(s.a[s.top]))
  {
    while(precedence(symbol)<=precedence(s.a[s.top]) && s.top!=-1) //V.V.V IMP
    postfix[k++]=s.a[s.top--];

    s.a[++s.top]=symbol;
  }

  i++;
}

while(s.top!=-1)
postfix[k++]=s.a[s.top--];

postfix[k]='\0';//Gotta do thios.

printf("\n%s\n",postfix);
}

int main()
{
  char infix[20],postfix[20];

  printf("Enter an infix expression:");
  scanf("%s",infix);

  printf("The postfix expression is:");
  infixtopostfix(infix,postfix);


  printf("The evaluation is:%d",evaluation(postfix));

  return 0;
}
