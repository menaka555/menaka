#include<stdio.h>
#include<string.h>
int main() {
   char a[100];
   int i,l=0,c=0;
   scanf("%s",a);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
       if((a[i]!='a')&&(a[i]!='b'))
       {
           c++;
           break;
       }
   }
   if(c!=0)
   printf("no");
   else
   printf("yes");
}
