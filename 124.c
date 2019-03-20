#include<stdio.h>
int main()
{
    int n,a[100],i,t=0,j,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
            if((i%a[j])==0)
            {
                m++;
            }}
        if(m==n)
        {
            t=i;
            break;}}
    printf("%d",t);
}
