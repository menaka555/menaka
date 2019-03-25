#include<stdio.h>

int main() {
   int n,i,r=0,a[100],k=0,t=0,j;
   scanf("%d",&n);
   while(n)
   {
       r=n%10;
       a[k]=r;
       k++;
       n=n/10;
   }
   for(i=0;i<k;i++)
   {
       for(j=i+1;j<k;j++){
       if(a[i]<a[j]){
       t=a[i];
       a[i]=a[j];
       a[j]=t;}}}
     for(i=0;i<k;i++){  
       printf("%d",a[i]);
   }
   }
