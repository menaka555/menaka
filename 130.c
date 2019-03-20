#include<stdio.h>
int main()
{
    int n,a[100],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n>1)
    {
    for(i=0;i<n;i++)
    {
     s=s+a[i];
     if(s%2==0)
     {
     printf("%d ",s);
    }}}
    else
    printf("%d",a[0]);
}
    
