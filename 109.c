#include<stdio.h>

int main() {
   int n,a[100],i,j=0,k=0,b[100];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=n-1;i>=0;i--)
   {
       j=j+a[i];
  b[k]=j;
  k++;
   }
   for(i=k-1;i>=0;i--)
   {
       printf("%d ",b[i]);
   }
   return 0;
}
