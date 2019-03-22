#include<stdio.h>
#include<string.h>
int main() {
    char a[100];
   int i,l=0,f=0;
   scanf("%[^\n]",a);
   l=strlen(a);
   for(i=2;i<=l/2;i++)
   {
       if(l%i==0)
       {
           f++;
           break;
       }}
     
   if(f==0)
   printf("yes");
   else
   printf("no");
}
      
