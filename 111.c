#include<stdio.h>

int main() {
   int n,m,i,j,a[100],b[100];
   scanf("%d",&n);
   scanf("%d",&m);
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   scanf("\t");
   for(i=0;i<m;i++)
   {
       scanf("%d",&b[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(a[i]==b[j])
           {
               printf("%d ",a[i]);
           }
       }
   }
   return 0;
}
