#include<stdio.h>
int main()
{
    int a,b,i,f=1,g=1,m=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    for(i=1;i<=b;i++)
    {
        g=g*i;
    }
    m=f/g;
    printf("%d",m);
}
