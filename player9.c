#include<stdio.h>

int main() {
   int l,r,i,f=0,c=0,j;
   scanf("%d%d",&l,&r);
   for(i=l;i<=r;i++)
           {
               f=0;
               for(j=2;j<=i/2;j++)
               {
                   if(i%j==0)
                   {
                       f++;
                       break;
                   }}
                   if(f==0)
                   {
                   c++;
                   }
                   f=0;
               }
           printf("%d",c);
           return 0;
}
