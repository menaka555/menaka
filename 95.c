#include<stdio.h>

int main() {
   int a,p,k,i,j=0,r=0,c[100],d=0,h=0,b[100];
   scanf("%d",&a);
   scanf("%d%d",&p,&k);
   d=p+k;;
   while(a)
   {
       r=a%10;
       c[j]=r;
       a=a/10;
       j++;
   }
   for(i=j-1;i>=0;i--)
   {
       b[h]=c[i];
       h++;
   }
   for(i=d-1;i<d;i++){
   printf("%d",b[i]);}
   return 0;
}
