#include<stdio.h>

int main() {
   int n,a[100],k,i;
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if((a[i]-a[i+1]==1)||(a[i+1]-a[i]==1))
       {
       if(a[i]==k)
       {
           printf("%d",i+1);
           break;
       }}
   }
   return 0;
}
