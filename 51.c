#include<stdio.h>
int main()
{
    int n,a[10000],i,t=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }}
    }
    for(i=1;i<2;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    
}
