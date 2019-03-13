
#include<stdio.h>
int main()
{
    int n,a[100],i,j=0,l=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            l=(a[i]&a[j]);
            if(l>=k)
            {
                k=l;
            }
            
        }
    }
    printf("%d",k);
    return 0;
}
