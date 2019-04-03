#include<stdio.h>

int main() {
   int a,b,i,c,r=0,bi=0,ba=1,k=0;
   scanf("%d%d",&a,&b);
   c=a^b;
   while(c)
   {
       r=c%2;
       bi=bi+(r*ba);
       ba=ba*10;
       c=c/2;
   }
   while(bi)
   {
       r=bi%10;
       if(r==1){
       k++;}
       bi=bi/10;
   }
   printf("%d",k);
}
