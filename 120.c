#include<stdio.h>

int main() {
   int n,bin=0,r=0,b=1,h=0;
   scanf("%d",&n);
   while(n)
   {
       r=n%2;
       bin=bin+(b*r);
       b=b*10;
       n=n/2;
       h++;
   }
   printf("%d",h);
}
