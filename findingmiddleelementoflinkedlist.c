#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head=NULL;

struct node* getnode(int data)
{
  struct node *new=(struct node *)malloc(sizeof(struct node));
  new->data=data;
  new->next=NULL;
  return new;
}

void insertatend(int data)
{
  struct node *new,*temp=head;
  new=getnode(data);

  if(head==NULL)
  head=new;

  else
  {
    while(temp->next!=NULL)
    temp=temp->next;

    temp->next=new;
  }
}

void display()
{
  struct node *temp=head;

  while(temp!=NULL)
  {
    printf("%d\t",temp->data);
    temp=temp->next;
  }
}

int Recursivecount(struct node *head)
{
  if(head==NULL)
  return 0;

  else
  {
    return 1+Recursivecount(head->next);
  }
}

void middleelement()
{
  struct node *temp=head;
  int value=Recursivecount(head);
  int i=1;
  for(i=1;i<value/2;i++)
  temp=temp->next;

  printf("The middle element is %d\n",temp->data);
}

int main()
{
  int ch,value,p,n;
  printf("1-Insert at end\n2-Iteratvedisplay\n3-Recursive at count\n4-Finding middle element\n");
  while(1)
{
  printf("\nEnter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:printf("Enter value to be entered:");
            scanf("%d",&value);
            insertatend(value);
            break;

    case 2:display();
    printf("\n");
          break;

    case 3:value=Recursivecount(head);
          printf("\nThe no. of elements in Linked list is %d\n",value);
           break;

    case 4: middleelement();
          break;

    }
  }

  return 0;
}
