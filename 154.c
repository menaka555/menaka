#include<stdio.h>

int main() {
   char a[100];
   int k,i;
   scanf("%s",a);
   scanf("%d",&k);
   for(i=0;a[i]!='\0';i++)
   {
       if((i%k)!=0)
       {
           a[i]=a[i]-32;
       }
   }
   printf("%s",a);}
