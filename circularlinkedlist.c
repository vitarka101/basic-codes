#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head=NULL;

struct node *getnode(int data)
{
  struct node *p;
  p=(struct node *)malloc(sizeof(struct node));
  p->next=NULL;
  p->data=data;
  return p;
}

void insertatend(int data)
{
  struct node *new=getnode(data);
  struct node *temp=head;
  if(head==NULL)
  {
    head=new;
    head->next=new;
  }
  else
  {
    while(temp->next!=head) //Not NULL
    temp=temp->next;

    temp->next=new;
    new->next=head;
  }
}


void iteratvedisplay(struct node *p)//Since the terminating case and initial state are same(i.e p=head) we use do while loop
{
  do
  {
    printf("%d\t",p->data);
    p=p->next;
  }while(p!=head);
}

void recursivedisplay(struct node *temp)
{
  static int flag=0;
  if(temp!=head || flag==0)//Initially flag=0 suggests that it is pointing to head
  {
    flag=1;
    printf("%d\t",temp->data);
    recursivedisplay(temp->next);
  }
  flag=0;//It again points to head thus we have to end the recursion
}

void insertatn(int data,int n)
{
  int i;
  struct node *new=getnode(data);
  struct node *temp=head;

  if(n==0)
  {
    new->next=head;
    while(temp->next!=head)
    temp=temp->next;
    temp->next=new;
    head=new;
  }
  else
  {
    for(i=1;i<n;i++)
    temp=temp->next;

    new->next=temp->next;
    temp->next=new;
  }

}



void deletionfromend()
{
  struct node *temp=head;
  struct node *prev;

 if(head->next==head)
 {
 free(temp);
 head=NULL;
 }
  else
  {
  do
  {
    prev=temp;
  temp=temp->next;
}while(temp->next!=head);

 free(temp);

 prev->next=head;
}
}

void deletenodeatn(int n) //validity of n is not checked
{
  int i=1;
  struct node *temp=head;
  struct node *prev;
  if(n==1)
  {
    head=head->next;
    free(temp);
  }

  else
  {
    while(i<n)
    {
    prev=temp;
    temp=temp->next;
    i++;
    }
    prev->next=temp->next;
  }
}


void iterativecount()
{
  int count=0;
  struct node *temp=head;
  if(head!=NULL)
  {
  do
  {
    temp=temp->next;
    count++;
  }while(temp!=head);
  }
  else
  count=0;

printf("%d\n",count);
}

int recursivecount(struct node *temp)//Not workin
{

  static int flag=0;
  if(temp==NULL)
  return 0;

  else if(temp!=head || flag==0)
  {
    flag=1;
    return(1+recursivecount(head->next));
  }
//  flag=0;
}

int main()
{
  int ch,value,p,n;
  printf("1-Insert at end\n2-Iteratvedisplay\n3-Recursive display\n4-Insert at n position(0 being the initial position to start)\n6-Delete node at any position(starting from n)\n7-Iterative count\n8-Recursive count(NOT WORKING)\n");
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

  case 2:iteratvedisplay(head);
    printf("\n");
        break;

  case 3:recursivedisplay(head);
          printf("\n");
          break;

  case 4:  printf("Enter value to be entered and index position:");
            scanf("%d%d",&value,&n);
            insertatn(value,n);
            break;

  case 5:deletionfromend();
          break;

  case 6: printf("Enter the position for deletion of the particular node:");
           scanf("%d",&n);
           deletenodeatn(n);
           break;

  case 7:iterativecount();
        break;

  case 8:value=recursivecount(head);
        printf("\nThe no. of elements in Linked list is %d\n",value);
        break;
  }
 }

 return 0;
}
