#include<stdio.h>

int main() {
   int x,y,n,i,c=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   scanf("%d %d",&x,&y);
   if(x>y)
   {
       c++;
       x=0;y=0;
   }
   }
   printf("%d",c);
   return 0;
}
