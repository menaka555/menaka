#include<stdio.h>

int main() {
   int n,a[100],i,j,b=0,c=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
       b=a[1]-a[0];
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
       c=0;
          c=a[j]-a[i];
          if(c<=b){
              b=c;
          }
   }}
printf("%d",b);
return 0;
}
