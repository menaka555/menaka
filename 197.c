#include<stdio.h>

int main() {
   int n,a[10000],i,c=0,d=0,h=0,g=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   c=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]<c)
       c=a[i];
   }
   d=c;
   h=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]>h)
       h=a[i];
   }
   g=h;
   printf("%d",g-d);
}
