#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char a[10],b[10];
  int h[26]={0};
  int i,n,count=0;

  printf("Enter the string 1:");
  scanf("%s",a);

  printf("Enter the string 2:");
  scanf("%s",b);

  for(i=0;a[i]!='\0';i++)
   h[a[i]-97]++;

  /*for(i=0;b[i]!='\0';i++)
   h[b[i]-97]++;

   for(i=0;i<26;i++)
   if(h[i]>0)
   count+=h[i];

   if(count==(strlen(a)+strlen(b)))
   printf("The strings are anagram\n");
   else
   printf("Not\n");
   printf("%d\n",count);*/

   for(i=0;b[i]!='\0';i++)
   {
     h[b[i]-97]--;    //Decrement value in the hash table
     if(h[b[i]-97]<0)
     {
    printf("Not an anagram\n");
    break;
    }

   }

   /*for(i=0;i<26;i++)
   {
     if(h[i]==0)
     count++;
 }
     if(count==26)
     printf("Strings are anagram\n");*/

     if(b[i]=='\0')
     printf("Strings are anagram\n");

 return 0;

}
