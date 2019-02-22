#include<stdio.h>

int main() {
   char a[100];
   int i;
   scanf("%[^\n]",a);
   for(i=0;a[i]!='\0';i++)
   {
       if((a[i]>='a')&&(a[i]<='z'))
       printf("%c",a[i]-32);
       else if((a[i]>='A')&&(a[i]<='Z'))
       printf("%c",a[i]+32);
   }
   return 0;
}
   
