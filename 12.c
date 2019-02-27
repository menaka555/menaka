#include<stdio.h>

int main()
{
    int n,k,i,a[100],t=0,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k;i++)
    {
       t=a[n-1];
       for(j=n-1;j>=0;j--)
       {
       a[j+1]=a[j];
       }
       a[0]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
