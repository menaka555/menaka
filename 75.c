#include<stdio.h>

int main() {
   int a[100],n,i,k=0,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=n-1;j>=0;j--)
       {
           if(a[j]>a[i])
           {
               k++;
           }
       }
   }
   printf("%d",k);
}
