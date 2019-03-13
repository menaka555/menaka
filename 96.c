#include<stdio.h>
void main()
{
    int a,i=0,r=0,b[100000],f=0,m=0,j;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        b[f]=r;
        f++;
        a=a/10;
    }
    printf("%d",(b[0]+b[f-1]));
}
    
