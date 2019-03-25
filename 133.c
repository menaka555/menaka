#include<stdio.h>
int main()
{
    int n,m,a,b,i,h=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
{
    scanf("%d%d",&a,&b);
    if(b==m)
    h++;}
    if(h!=0)
    printf("yes");
    else
    printf("no");
}
