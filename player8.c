#include<stdio.h>

int main() {
   char s[100],temp[100];
   int i;
   scanf("%[^\n]",s);
   s[0]=s[0]-32;
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]==' ')
       {
           s[i+1]=s[i+1]-32;
       }
   }
   printf("%s",s);
   return 0;
}
