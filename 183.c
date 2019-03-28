#include<stdio.h>

int main() {
   int n,a[100],b[100],k=0,i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++){
   if(a[i]>0)
   printf("%d ",a[i]);
   else{
   b[k]=a[i];
   k++;}}
   for(i=0;i<k;i++)
   {
       printf("%d ",b[i]);
   }}
