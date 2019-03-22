#include<stdio.h>

int main() {
   int n,a,k=0,i=0,r=0,t=0,b[100],j=0;
   scanf("%d%d",&n,&a);
       t=n*a;
     
   while(t)
   {
       r=t%2;
       b[i]=r;
       i++;
       t=t/2;
   }
   for(j=0;j<i;j++)
   {
       if(b[j]==1)
       {
           k=j;
           break;
       }
   }
   printf("%d",k+1);
}
      
       
