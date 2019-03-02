#include<stdio.h>

int main() {
  int n,k=0,i,a[100],j=0,l=0,b[100],c[100];
   scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
 for(i=0;i<n;i++)
 {
     if(a[i]%2==0)
     {
     b[k]=a[i];
      k++;
     }
     else
     {
     c[l]=a[i];
     j++;
 }}

 if(k>j)
 {
  for(i=0;i<j;i++)
 {
 printf("%d",c[i]);
 }}
 else
 for(i=0;i<k;i++)
 {
 printf("%d",b[i]);
 }
 return 0;
}
