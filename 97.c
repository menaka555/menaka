#include<stdio.h>
void main()
{
    int a,b,i,s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        if(i&1==1)
        {
            s=s+i;
        }
    }
    printf("%d",s);
}
