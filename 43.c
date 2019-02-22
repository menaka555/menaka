#include<stdio.h>

int main() {
   char a[100],b[100];
   int i,j=0,h=0,k;
   scanf("%s",a);
   scanf("%s",b);
   for(i=0;b[i]!='\0';i++)
   {
       h++;
   }
   for(i=0;a[i]!='\0';i++)
   {
       for(k=0;b[k]!='\0';k++)
       {
       if(b[k]==a[i])
       j++;
   }}
   if(j==h)
   printf("yes");
   else
   printf("no");
   return 0;
}
