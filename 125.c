#include<stdio.h>

int main() {
   int n,a[100],i,j,m=0,c=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=1;i<=n;i++)
   {
       c=0;
       for(j=0;j<n;j++)
       {
           if(a[i]%i==0)
           {
               c++;
           
       }
           if(c==n)
           m=i;
       }}
       printf("%d",m);
   }
