#include<stdi.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char a[20],i;

  printf("Enter a string:");

  scanf("%s",a);
  for(i=0;i<(strlen(a)/2);i++)
  {
    a[i]=temp;
    a[i]=a[strlen(a)-i];
    a[strlen(a)-i]=temp;
  }

  printf("%s",a);

  return 0;
}
