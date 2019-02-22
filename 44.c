#include<stdio.h>

int main() {
   char a[100];
   int i,k,l=0;
   scanf("%s",a);
   scanf("%d",&k);
   for(i=0;a[i]!='\0';i++)
   {
       l++;
   }
   if(k>l)
   {
       printf("%s",a);
   }
   else
   {
   for(i=l-k;i<l;i++)
   {
       printf("%c",a[i]);
       a[i]='$';
   }
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]!='$')
       {
           printf("%c",a[i]);
       }
   }}
   return 0;
}
