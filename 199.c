#include<stdio.h>

int main() {
   char a[100],n[100],t;
   int i,j,k,b=0,c=0,m=0,h=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
   b++;
   }
   t=a[0];
   a[0]=a[1];
   a[1]=t;
   for(i=b-1;i>=0;i--)
   {
   	n[h]=a[i];
   	h++;
   	}
       for(j=0;j<b;j++)
       {
               if(a[j]==n[j])
               {
                   c++;
               }
          }
       
       if(c==b)
       {
           m++;
       }
       
   
   if(m!=0)
   printf("yes");
   else
   printf("no");
}
