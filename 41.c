#include<stdio.h>

int main() {
   int n,k,i,m=1,d=0;
   scanf("%d%d",&n,&k);
   for(i=2;i<n;i++)
   {
       m=m*k;
       if(m==n)
       {
           d++;
           break;
       }}
       if(d!=0)
       printf("yes");
       else
       printf("no");
   return 0;
}
