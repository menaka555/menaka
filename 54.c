#include<stdio.h>

int main() {
   char a[100],b[100];
   int i,l=0,k=0,d=0,g=0;
   scanf("%s",a);
   scanf("%s",b);
   for(i=0;a[i]!='\0';i++)
   {
       l++;
   }
   for(i=0;b[i]!='\0';i++)
   {
       k++;
   }
   if(l==k)
   {
   for(i=0;i<l;i++)
   {
       if(a[i]==b[i])
       g++;
   }}
   if(g==l)
   printf("yes");
   else
   printf("no");
   return 0;
}
