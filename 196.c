#include<stdio.h>

int main() {
   int a[100],n,i,t=0,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       t=0;
       for(j=i+1;j<n;j++)
       {
           if((a[i]==a[j])&&(a[i]!='$')&&(a[j]!='$'))
           {
               a[j]='$';
               t++;
           }
       }
       if((t==0)&&(a[i]!='$')){
       printf("%d",a[i]);}
   }}
