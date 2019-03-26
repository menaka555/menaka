#include<stdio.h>
#include<string.h>
int main() {
   char a[10000],b[10000];
   int i,k=0,j,c=0,h=0;
   scanf("%s",a);
   c=strlen(a);
   for(i=0;i<c;i++)
   {
       h=0;
       if(a[i]!='$'){
       printf("%c",a[i]);
       {
           for(j=i+1;j<c;j++)
       {
           if((a[j]!='$')&&(a[i]!='$'))
           {
       if(a[i]==a[j]){
       h++;
       a[j]='$';}
       }}}
       if(h!=0){
       a[i]='$';}
       printf("%d",h+1);
       
   }}}
