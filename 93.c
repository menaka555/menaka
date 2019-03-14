#include<stdio.h>

int main() {
   int n,a[100],i,t=0,j=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   if(n%2==0){
   for(i=0;i<n;i++)
   {
     if(i%2==0)
     {
         t=a[i+1];
         a[i+1]=a[i];
         a[i]=t;
     }
   }}
   else
   {
       for(i=0;i<n-1;i++)
       {
           if(i%2==0)
           {
               t=a[i+1];
               a[i+1]=a[i];
               a[i]=t;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   return 0;
}
