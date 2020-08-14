#include<stdio.h>
#include<stdlib.h>

struct queue
{
  int front;
  int rear;
  int size;
  int *a; // Dynamic allocation
};

int isempty(struct queue q)
{
  if(q.front==q.rear)
  return 1;
  else
  return 0;
}

int isfull(struct queue q)
{
  if(q.front==-1 && q.rear==q.size-1 || q.rear==q.front-1)
  return 1;
  else
  return 0;
}

void enqueue(struct queue *q,int x)
{
  if(isfull(*q))
  printf("Queue is full\n");

  else
  {
    if(q->rear!=q->size-1)
    q->a[++q->rear]=x;
    else if(q->rear==q->size-1 && q->front!=-1)
    {
      q->rear=-1;
      q->a[++q->rear]=x;
    }
  }
}


int dequeue(struct queue *q)
{
  int x=-1; // For having single return statement
  if(isempty(*q))
  printf("Queue is empty\n");

  else
  {
    if(q->front!=q->size-1)
    x=q->a[++q->front];
    else if(q->front==q->size-1 && q->rear!=q->size-1)
    {
      q->front=-1;
      x=q->a[++q->front];
    }

  return(x);
  }
}

void display(struct queue q)
{
  int x=q.front+1,i=0;
  while(x!=q.rear)
  {
    x=((q.front+1)+i)%q.size;
    printf("%d\t",q.a[x]);
    i++;
  }
}


int main()
{
  int ch,val,position;
  struct queue q;
  q.front=q.rear=-1;
  printf("Enter the size of queue:");
  scanf("%d",&q.size);
  q.a=(int*)malloc(q.size*sizeof(int));
  while(1)
  {
    printf("\n1-Enqueue\n2-Dequeue\n3-Display\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:printf("Enter element to be enqueue:");
              scanf("%d",&val);
              enqueue(&q,val);
              break;


      case 2:val=dequeue(&q);
              if(val!=-1)
              printf("\nThe dequeued element is:%d\n",val);
              break;



      case 3:display(q);
              break;

    }
  }

  return 0;
}
