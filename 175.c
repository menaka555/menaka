#include<stdio.h>
#include<string.h>
int main() {
   char a[1000],b[1000];
   int i,k=0,j,m,n;
   scanf("%s %s",a,b);
   m=strlen(b);
   n=strlen(a);
   for(i=0;b[i]!='\0';i++)
   {
       for(j=0;a[j]!='\0';j++)
       {
           if((b[i]==a[j]))
           {
               k++;
               break;
           }}}
           if((k!=0)&&(m+n!=26))
           printf("no");
           else
           printf("yes");
}
          
       
    
