#include<stdio.h>

int main() {
   int n,a[1000],k,m,i,t=0,j,h=0,b[100];
   scanf("%d%d%d",&n,&k,&m);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=k-1;i<m;i++)
   {
       for(j=k-1;j<m;j++)
       {
       if(a[i]<a[j])
       {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
       }
   }}
   for(i=k-1;i<m;i++){
   b[h]=a[i];
       h++;
   }
   for(i=0;i<1;i++)
   {
       printf("%d ",b[i]);
   }
}
