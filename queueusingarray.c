#include<stdio.h>
#include<stdlib.h>

struct queue{
  int front;
  int rear;
  int size;
  int *a;//Dynamically allocatted
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
  if(q.rear==q.size-1)
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
    q->a[++q->rear]=x;
  }
}

int dequeue(struct queue *q)
{
  if(isempty(*q))
  {
    printf("Queue is Empty\n");
    return -1;
  }

  else
  {
    return(q->a[++q->front]);
  }
}

void display(struct queue q)
{
  int i;
  for(i=(q.front+1);i<=q.rear;i++)//Since front always points before the first element
  printf("%d\t",q.a[i]);
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
