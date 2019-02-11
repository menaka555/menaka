#include<stdio.h>

int main() {
   char a[100],b[100];
   int i,g=0,k=0,l=0,j;
   scanf("%s",a);
   scanf("%s",b);
   for(i=0;a[i]!='\0';i++)
   {
       l++;
   }
       for(i=0;i<l;i++)
       {
           if(a[i]==b[i])
           {
           g++;
           }
           if(a[i]!=b[i])
           {
               k++;
           }
       }
           if((k==1)&&(g!=0))
               printf("yes");
               else
               printf("no");
               
       return 0;
       }
