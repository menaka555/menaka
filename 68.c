#include<stdio.h>

int main() {
   int n,a[100],i,b=0,m=0,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       m=0;
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               m++;
               
           }}
           if(b<=m)
           b=m;
       
   }
   printf("%d",b+1);
   return 0;
}
