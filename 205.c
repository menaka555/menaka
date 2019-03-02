#include<stdio.h>

int main() {
   char a[100];
   int i;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if((a[i]>='a')&&(a[i]<='z'))
       {
           a[i]=a[i]-32;
       }
       else
       a[i]=a[i]+32;
   }
   for(i=0;a[i]!='\0';i++)
   {
       printf("%c",a[i]);
   }
   return 0;
}
