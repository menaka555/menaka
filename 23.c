#include<stdio.h>
int main()
{
    int i,n,k,a[100],b[100],j,m=0;
    scanf("%d",&n);
     scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    scanf("%d",&b[i]);
    for(i=0;i<k;i++)
    {
        m=0;
        a[n]=b[i];
        n++;
        for(j=0;j<n;j++)
        {
            if(a[j]>m)
            {
                m=a[j];
            }
        }
        printf("%d ",m);
    }}
    
