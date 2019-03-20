#include<stdio.h>

int main() {
   int n,a[1000],k=0,m,i,t=0,j,h=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n/2;i++)
   {
       for(j=i+1;j<n/2;j++){
       if(a[i]>a[j])
       {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
       }
   }}
   for(i=0;i<n/2;i++)
   {
       printf("%d ",a[i]);
   }

for(i=n/2;i<n;i++)
{
    for(j=n/2;j<n;j++){
    if(a[i]>a[j])
    {
        k=a[i];
        a[i]=a[j];
        a[j]=k;
    }
}
}
for(i=n/2;i<n;i++)
{
    printf("%d ",a[i]);
}
}
