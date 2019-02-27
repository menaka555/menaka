#include<stdio.h>

int main() {
   int a,b[100],c[100],i,q=0,j;
   scanf("%d",&a);
   for(i=0;i<a;i++)
   {
     scanf("%d",&b[i]);
   }
   for(i=0;i<a;i++)
   {
       scanf("%d",&c[i]);
        }
        for(i=0;i<a;i++)
        {
            q=0;
            for(j=0;j<a;j++)
            {
            if(b[i]==c[j])
            {
                q++;
            }
            if(q!=0)
            {
            printf("%d ",b[i]);
            break;
            }}
        }
        return 0;
}
