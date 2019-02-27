#include<stdio.h>

int main()
{
    int n,i,a[100],l=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        l=0;
        for(j=i+1;j<n;j++)
        {
        if(a[i]==a[j])
        {
            a[j]='$';
            l++;
        }}
        if(l==0)
        {
            if(a[i]!='$')
            {
            printf("%d ",a[i]);
        }
    }}
    return 0;
}
