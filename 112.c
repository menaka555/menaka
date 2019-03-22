#include<stdio.h>
int main() {
   int n,a[200],i,s=0,j,k;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       for(j=i;j<n;j++)
       {
          s++;
      }}
   printf("%d",s);
}
