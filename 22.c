#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            printf("%d",i);
            break;
        }
        
}
return 0;
}
