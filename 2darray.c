#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,j;
  int *b[3];//ARRAY OF POINTERS CREATED IN STACK TO EACH LOACATION IN THIS WE CAN ASSIGN AN ARRAY IN HEAP
  int **c;


  b[0]=(int *)malloc(4*sizeof(int));//ROWS ARE CREATED IN HEAP
  b[1]=(int *)malloc(4*sizeof(int));
  b[2]=(int *)malloc(4*sizeof(int));


  c=(int **)malloc(3*sizeof(int*));//ARRAY IS CREATED IN HEAP;

  c[0]=(int *)malloc(4*sizeof(int));//COLUMN OF ARRAY IS ALSO CREATED IN HEAP
  c[1]=(int *)malloc(4*sizeof(int));
  c[2]=(int *)malloc(4*sizeof(int));

  for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
printf("%d ",c[i][j]);
printf("\n");
}
return 0;
}
