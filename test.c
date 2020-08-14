#include<stdio.h>
#include<stdlib.h>
/*void f (int n)
{

  static int d=1;
  if(n>0)
  {
  d++;
    printf("%d\n",d);
  f(n-1);

}
else
printf("fck\n");


}*/
void toh(int n,char start[],char intermediate[],char end[])
{
  if(n==1)
  printf("Move disk from %s to %s\n",start,end);
  else
  {

  toh(n-1,start,end,intermediate);
    printf("Move disk from %s to %s\n",start,end);
    //toh(1,start,intermediate,end);
  toh(n-1,intermediate,start,end);
  //printf("Move disk from %s to %s\n",start,end);
}
}


        int main()
        {
          /*int num=325;
          char n[10];
          itoa(num,n,10);
          printf("%s\n",n);
        f(3);*/
        char start[10]="start",intermediate[10]="intermediate",end[10]="end";
        toh(3,start,intermediate,end);
        return 0;
        }
