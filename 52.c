#include<stdio.h>
int main()
{
    int n,a[10000],i,t=0,j,k;
    scanf("%d",&n);
    scanf("%d",&k);
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
        }}}
    for(i=k-1;i<k;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
}
