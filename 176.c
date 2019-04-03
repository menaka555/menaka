#include<stdio.h>
#include<string.h>
int main() {
   char a[1000],b[1000];
   int i,k=0,j,m;
   scanf("%s %s",a,b);
   m=strlen(b);
   for(i=0;b[i]!='\0';i++)
   {
       for(j=0;a[j]!='\0';j++)
       {
           if((b[i]==a[j])&&(a[j]!='$')&&(a[i]!='$'))
           {
               k++;
               break;
           }}}
           if(k==m)
           printf("true");
           else
           printf("false");
}
          
       
    
