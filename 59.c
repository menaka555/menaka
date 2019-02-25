#include<stdio.h>

int main() {
   char a[100];
   int i,j,l;
   scanf("%d",&l);
   scanf("%s",a);
   for(i=0;i<l;i++)
   {
       for(j=i+1;j<l;j++)
       {
           if(a[i]=='1')
           {
               if(a[j]=='0')
               {
                   printf("1");
                   break;
               }
           }
       }
   }
return 0;
}
