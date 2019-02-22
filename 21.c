#include<stdio.h>
int main(){
   int a,b,i,l=0;
   for(i=0;i<3;i++)
   {
   scanf("%d%d",&a,&b);
   if((a==0)||(b==0))
   {
       l++;
   }}
   if(l==3)
   printf("yes");
   else
   printf("no");
   return 0;
}
