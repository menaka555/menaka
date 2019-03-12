#include<stdio.h>

int main() {
   int n,a[100],i,j,b=0,c=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=n-1;j>=i;j--)
       {
          c=a[j]-a[i];
          if(c>=b){
              b=c;
          }
          }
   }
printf("%d",b);
return 0;
}
