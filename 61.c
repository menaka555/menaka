#include<stdio.h>

int main() {
   int a,b,c[100],i,j,s=0;
   scanf("%d%d",&a,&b);
   for(i=0;i<a;i++)
   {
       scanf("%d",&c[i]);
   }s=0;
   for(i=0;i<a;i++)
   {
       s=s+c[i];
   }
   if(s==b)
   printf("yes");
   else
   printf("no");
   return 0;
}
