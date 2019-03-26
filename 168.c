#include<stdio.h>
#include<string.h>
int main() {
   char a[100],b[10000];
   int i,k=0,j,c=0,h=0;
   scanf("%s",a);
   c=strlen(a);
   for(i=0;i<c;i++)
   {
       b[i]='\0';k=0;h=0;
       if((a[i]>='1')&&(a[i]<='9'))
       {
           b[k]=a[i-1];
           k++;
           h=a[i]-48;
       }
       for(j=0;j<h;j++)
       {
           printf("%s",b);
       }
       
   }
   }
