#include<stdio.h>

int main() {
   char a[100];
   int i;
   scanf("%[^\n]",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]<' ')
       printf("%c",a[i]);
       if(a[i]>' ')
       printf("%c",a[i]);
   }
   return 0;
}
   
