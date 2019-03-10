#include<stdio.h>

int main() {
   int x,i,c=0;
   scanf("%d",&x);
   for(i=1;i<=x/2;i++)
   {
       if(x%i==0)
       {
           c=x/i;
           if(c%2!=0)
           {
           printf("%d",i);
           break;
   }}}
   return 0;
}
