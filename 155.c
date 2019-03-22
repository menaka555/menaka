#include<stdio.h>

int main() {
   int n,a[100],k,i,t=0;
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<k-1;i++)
   {
       if(a[i]>a[i+1])
       {
           t=a[i];
           a[i]=a[i+1];
           a[i+1]=t;
       }}t=0;
       for(i=k;i<n-1;i++)
       {
           if(a[i]<a[i+1])
           {
               t=a[i];
               a[i]=a[i+1];
               a[i+1]=t;
           }
       }
       for(i=0;i<n;i++)
       {
           printf("%d",a[i]);
       }}
       
