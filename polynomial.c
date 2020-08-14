#include<stdio.h>
#include<stdlib.h>

struct term
{
  int coeff;
  int exp;
};

struct poly
{
  int n;
  struct term *terms; //structure type array of terms but since we don't know the no. of terms we use pointer
};

void create(struct poly *p)
{
  int i;
  printf("Enter the number of non-zero elements:");
  scanf("%d",&p->n);

  p->terms=(struct term *)malloc(p->n*sizeof(struct term));

  printf("Enter terms:");
  for(i=0;i<p->n;i++)
  {
    scanf("%d%d",&p->terms[i].coeff,&p->terms[i].exp);
  }
}


void display(struct poly p)
{
  int i;
  for(i=0;i<p.n;i++)
  printf("%dX^%d+",p.terms[i].coeff,p.terms[i].exp);
  printf("\n");
}

struct poly add(struct poly p1,struct poly p2)
{
  struct poly p3;
  int i=0,j=0,k=0;

  while(i<p1.n && j!=0)
  {
    if(p1.terms[i].exp==p2.terms[j].exp)
    {
    p3.terms[k++].coeff=p1.terms[i].coeff+p2.terms[i].coeff;
    p3.terms[k++].exp=p1.terms[i].exp;
    }

    else if(p1.terms[i].exp > p2.terms[j].exp)
    {
    p3.terms[k++].coeff=p1.terms[i].coeff;
    p3.terms[k++].exp=p1.terms[i].exp;
    }

    else

  }
  }






int main()
{
  struct poly p1,p2,p3;
  create(&p1);
  create(&p2);
  display(p1);
  display(p2);
  p3=add(p1,p2);
  display(p3);
  return 0;
}
