#include<stdio.h>

int main() {
   char s[100];
   int i,d=0,l=0;
   scanf("%s",s);
    for(i=0;s[i]!=0;i++)
   {
       l++;
   }
   for(i=0;i<1;i++)
   {
       if(s[i]=='s')
       {
       d++;
       }
   }
   if(d==0)
   printf("no");
   else
   printf("yes");
   return 0;
}
