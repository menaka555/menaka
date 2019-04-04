#include<stdio.h>

int main() {
   int n,a[100],i,k=0,c=0,m=0,d=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       if(a[i]>a[i+1])
       {
           k++;
       }
       if(a[i]<a[i+1])
       c++;
   }
   if((k==n/2)&&(c==n/2+1))
   printf("yes");
   else
   printf("no");
}
