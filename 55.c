#include<stdio.h>

int main() {
   char a[100],b[100];
   int i,l=0,m=0,n=0,j;
   scanf("%s",a);
   scanf("%s",b);
   for(i=0;a[i]!='\0';i++)
   {
       l++;
   }
       for(j=0;b[j]!='\0';j++)
       {
           m++;}
           if(m==l){
           for(i=0;i<l;i++)
           {
           if((a[i]==b[i])||(a[i]==b[i]+32)||(a[i]==b[i]-32))
                  {
                      n++;
                  }}}
   if(n==m)
   {
       printf("yes");
   }
   else
   printf("no");
   return 0;
           }
