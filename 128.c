#include<stdio.h>
int main()
{
    int n,a[100],i,s=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s*a[i];
    }
    if(s%2==0)
    {
        printf("even");
    }
    else
    printf("odd");
}
