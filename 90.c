#include<stdio.h>

int main() {
   int n,k,i,f=1,d=0,h=1,e=0,g=1;
   scanf("%d%d",&n,&k);
   d=n-k;
   for(i=1;i<=n;i++)
   {
       f=f*i;
   }
   for(i=1;i<=k;i++)
   {
       g=g*i;
   }
   for(i=1;i<=d;i++)
   {
       h=h*i;
   }h=g*h;
   e=f/h;
   printf("%d",e);
   return 0;
}
