#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *top=NULL;

struct node *getnode(int data)
{
  struct node *new=(struct node*)malloc(sizeof(struct node));
  new->data=data;
  new->next=NULL;

  return new;
}

int isempty()
{
  if(top==NULL)
  return 1;
  else
  return 0;
}


int isfull()
{
  struct node *t=(struct node*)malloc(sizeof(struct node));//To check if heap is full or not
  int r=t?0:1;
  free(t);
  return r;
}



void push(int data)//INSERT AT FRONT SINCE O(1) TIME IS TAKEN
{
  struct node *new=getnode(data);
  if(isfull())
  printf("Stack Overflow!!!\n");

  else
  {
    if(top==NULL)
    top=new;
    else
    {
      new->next=top;
      top=new;
    }
  }
}

int pop()
{
  int x=-1;
  struct node *temp;
  if(isempty())
  printf("Stack is empty UNDERFLOW!!!\n");

  else
  {
    x=top->data;
    temp=top;
    top=top->next;
    free(temp);
  }
  return x;
}


int peek(int position)
{
  struct node *temp=top;
  int i;
  for(i=1;temp!=NULL && i<position;i++)
  temp=temp->next;

  if(temp!=NULL)
  return temp->data;

  else
  return -1;
}

void display(struct node *temp)
{
  if(temp==NULL)
  {
  printf("\n");
  return;
  }
  else
  {
    printf("%d\t",temp->data);
    display(temp->next);
  }

}

int main()
{
  int ch,val,position;
while(1)
{
  printf("1-push\n2-pop\n3-Peek\n4-display\n");
  printf("Enter choice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:printf("Enter element to be pushed:");
            scanf("%d",&val);
            push(val);
            break;


    case 2:val=pop();
            if(val!=-1)
            printf("\nThe popped element is:%d\n",val);
            break;

    case 3:printf("Enter the position to peek\n");
          scanf("%d",&position);
          val=peek(position);
          if(val!=-1)
          printf("Value at position %d is %d\n",position,val);
            break;

    case 4:display(top);
            break;

  }
}

return 0;
}
