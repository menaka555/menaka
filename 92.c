#include<stdio.h>

int main() {
   int x,ba=1,bin=0,r=0;
   scanf("%d",&x);
   while(x)
   {
       r=x%10;
       bin=bin+(r*ba);
       ba=ba*2;
       x=x/10;}
   printf("%d",bin);
   return 0;
}
