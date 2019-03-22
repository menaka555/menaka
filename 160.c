#include<stdio.h>

int main() {
   int n,a,k=0,i,t=0,r=0,b=0,ba=1;
   scanf("%d%d",&n,&a);
       t=a|n;
   while(t)
   {
       r=t%2;
       b=b+(r*ba);
       ba=ba*10;
       t=t/2;
   }
   while(b)
   {
       r=b%10;
       if(r==1)
       {
       k++;}
       b=b/10;
   }
   printf("%d",k);
}
      
       
