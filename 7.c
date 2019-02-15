#include<stdio.h>

int main() {
   char a[100],t[100];
   int i;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(i%2==0)
       {
           t[i]=a[i];
           a[i]=a[i+1];
           a[i+1]=t[i];
       }
   }
   printf("%s",a);
   return 0;
}
   
