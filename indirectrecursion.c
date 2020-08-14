#include<stdio.h>
#include<stdlib.h>
void fun1(int);
void fun2(int);

void fun2(int n)
{
if(n>0)
{
printf("%d\n",n);
fun1(n-2);
}
}

void fun1(int n)
{
if(n>0)
{
printf("%d\n",n);
fun2(n-1);
}
}


int main()
{
fun1(3);
return 0;
}
