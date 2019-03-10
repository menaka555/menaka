#include<stdio.h>

int main() {
   int x,k,i,c=1,a[100],j;
   scanf("%d",&x);
   scanf("%d",&k);
   for(i=0;i<x;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<x;i++)
   {
       c=1;
       for(j=i+1;j<x;j++)
       {
       if(a[i]==a[j]){
       c++;}
       if(c==k){
       printf("%d",a[i]);
           break;
       }
   }}
   return 0;
}
