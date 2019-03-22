#include<stdio.h>

int main() {
   int n,a,k=0,i=0,r=0,t=0,b[1000],j=0;
   scanf("%d%d",&n,&a);
       t=n*a;
     
   while(t)
   {
       r=t%2;
       b[i]=r;
       i++;
       t=t/2;
   }
   for(j=i-1;j>=1;j--)
   {
       if(b[j]==1)
       {
           k=j;
           
       }
   }
   if(k%2==0)
   printf("%d",k+2);
   else
   printf("%d",k+1);
}
      
       
