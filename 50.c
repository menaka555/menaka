#include<stdio.h>
int main()
{
    int a,i,l=0;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            l++;
        }}
        if(l!=0)
                printf("yes");
                else
                printf("no");
    return 0;
}
    
