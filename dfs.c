#include<stdio.h>
#include<stdlib.h>

int visited[10]={0},g[10][10],v;

void dfs(int i)
{
  int j;
  printf("%d\t",i);
  visited[i]=1;
  for(j=0;j<v;j++)
  {
    if(g[i][j]!=0 && visited[j]==0)
    dfs(j);
  }
}



int main()
{
  int i,j;
  printf("Enter the number of vertices:");
  scanf("%d",&v);

  printf("Enter the adjacency matrix:");
  for(i=0;i<v;i++)
  {
    for(j=0;j<v;j++)
    scanf("%d",&g[i][j]);
  }

  for(i=0;i<v;i++)
  {
  if(visited[i]==0)
  dfs(i);
  }


}
