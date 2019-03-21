#include<stdio.h>

int main() {
   int n,i,bin=0,r=0,b=1,t=0,c=0;
   scanf("%d",&n);
   while(n)
   {
       r=n%2;
       bin=bin+(b*r);
       b=b*10;
       n=n/2;
   }
  while(bin)
  {
      t=bin%10;
      if(t==1)
      {
          c++;
      }
      bin=bin/10;
  }
  printf("%d",c);
}
