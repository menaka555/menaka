#include<stdio.h>

int main() {
   int n,d=0,r;
   scanf("%d",&n);
   while(n)
   {
       if(n%64==0)
       {
           d++;
           break;
       }
       r=n%10;
       n=n/10;
   }
   if(d>0)
   printf("yes");
   else
   printf("no");
}
   
