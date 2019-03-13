#include<stdio.h>

int main() {
   int x,ba=1,bin=0,r=0;
   scanf("%d",&x);
   while(x)
   {
       r=x%2;
       bin=bin+(r*ba);
       ba=ba*10;
       x=x/2;}
   printf("%d",bin);
   return 0;
}
