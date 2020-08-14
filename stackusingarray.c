#include<stdio.h>
#include<stdlib.h>

struct stack
{
  int size;
  int *a;//Dynamic array
  int top;
};

int isfull(struct stack s)
{
  if(s.top==s.size-1)
  return 1;
  else
  return 0;
}

int isempty(struct stack s)
{
  if(s.top==-1)
  return 1;
  else
  return 0;
}

void push(struct stack *s,int data)
{
  if(isfull(*s))
  printf(" Stack is full OVERFLOW!!!\n");

  else
  {
    s->a[++s->top]=data;
  }
}

int pop(struct stack *s)
{
  int x=-1;
  if(isempty(*s))
  printf("Stack is empty UNDERFLOW!!!\n");

  else
  {
    x=s->a[s->top--];
  }
  return x;
}

int peek(struct stack s,int pos)//pos=1 means top element
{
  int x=-1;
  if(s.top-pos+1<0 || s.top==-1)
  printf("Invalid position\n");

  else
  x=s.a[s.top-pos+1];

  return x;
}


void display(struct stack s)
{
while(s.top!=-1)
printf("%d\t",s.a[s.top--]);

printf("\n");
}

int main()
{
  int ch,val,position;
  struct stack s;
  s.top=-1;
  printf("Enter the size of stack:");
  scanf("%d",&s.size);
  s.a=(int*)malloc(s.size*sizeof(int));
  while(1)
  {
    printf("1-push\n2-pop\n3-Peek\n4-display\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:printf("Enter element to be pushed:");
              scanf("%d",&val);
              push(&s,val);
              break;


      case 2:val=pop(&s);
              if(val!=-1)
              printf("\nThe popped element is:%d\n",val);
              break;

      case 3:printf("Enter the position to peek\n");
            scanf("%d",&position);
            val=peek(s,position);
            if(val!=-1)
            printf("Value at position %d is %d\n",position,val);
              break;

      case 4:display(s);
              break;

    }
  }

  return 0;
}
