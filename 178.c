#include<stdio.h>

int main() {
   char a[1000];
   int i,k=0,j;
   scanf("%[^\n]",a);
   for(i=0;a[i]!='\0';i++)
   {
       k=0;
       for(j=i+1;a[j]!='\0';j++)
       {
           if((a[i]==a[j])&&(a[j]>='a')&&(a[j]<='z'))
           {
               a[j]=a[j]-32;
               k++;
           }}
       
       if((k>0)&&((a[i]>='a')&&(a[i]<='z')))
       a[i]=a[i]-32;
   }
   for(i=0;a[i]!='\0';i++)
   {
       printf("%c",a[i]);
   }}
