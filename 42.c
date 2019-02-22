#include<stdio.h>

int main() {
   int a[1000],n,i,t=0,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
       if(a[i]>a[j])
       {
           t++;
           break;
       }}}
       if(t!=0)
           printf("no");
           else
           printf("yes");
       return 0;
   }
