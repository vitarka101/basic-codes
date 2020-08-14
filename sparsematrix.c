#include<stdio.h>
#include<stdlib.h>

void display(struct sparse *s)
{
  int i,j;
  printf("%d\t%d\t%d\n",s->m,s->n,s->num);
  for(i=0;i<s->m*s->n;i++)
  {
    for(j=0;j<s->n;j++)
    printf("%d\t%d\t%d\n",i,j,s->e[i][j]);
  }
}


struct element
{
  int i; //Row no. of nonz-ero value
  int j; //Column no. of non-zero value
  int x; //Non-zero Number
};

struct sparse
{
  int m; //Number of rows of original matrix
  int n; //Number of columns of original matrix
  int num; //Total number of non-zero elements
  struct element *e; //Pointer for array of elements
};

void create (struct sparse *s)
{
  int i,j;
  printf("Enter the size of matrix(m*n)");
  scanf("%d%d",&s->m,&s->n);
  printf("Enter the number of non-zero elemnts");
  scanf("%d",&s->num);
  s->e=(int *)malloc(sizeof(int)*(s->num*(sizeof(struct element))));

  printf("Enter the elements");

  for(i=0;i<s->m;i++)
  {
    for(j=0;i<s->n;j++)
    scanf("%d",&s->e[i][j]);
  }
    display(s);
}




int main()
{
  struct sparse s;
  create(&s);

  return 0;
}
