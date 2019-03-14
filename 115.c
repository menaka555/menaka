#include<stdio.h>

int main() {
   char a[100],b[100];
   int i,l=0,m=0,j;
   scanf("%s",a);
   scanf("%s",b);
   for(i=0;a[i]!='\0';i++)
   {
       l++;
   }
   for(i=0;b[i]!='\0';i++)
   {
       m++;
   }
   if(m==l)
   {
          printf("%s",a);
          printf("%s",b);
   }
   else if(l>m)
   {
       for(i=0;i<l-1;i++)
       {
           printf("%c",a[i]);
       }
       printf("%s",b);
   }
   else
   {
       printf("%s",a);
       for(i=0;i<m-1;i++)
       {
           printf("%c",b[i]);
       }
   }
   return 0;
}
