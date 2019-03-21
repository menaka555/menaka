#include<stdio.h>
int main()
{
    int n,a[10000],i,j,k=0,l=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            a[k]=i;
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=2;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                a[i]='$';
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(a[i]!='$')
        printf("%d ",a[i]);
    }
}
