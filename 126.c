#include<stdio.h>

int main() {
  int n,a[100],i,k,j=0,b[100],t=0;
  scanf("%d",&n);
 scanf("%d",&k);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
     if(a[i]<k)
     {
         b[j]=a[i];
         j++;
     }
 }
 for(i=0;i<j;i++)
 {
     for(k=1;k<j;k++)
     {
         if(b[i]>b[k])
         {
             t=a[i];
             b[i]=b[k];
             b[k]=t;
         }
     }
     printf("%d ",b[i]);
 }}
 
