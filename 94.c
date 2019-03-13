#include<stdio.h>
void main()
{
    int a,i=0,r=0,b[10000],f=0,m=0,j;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        b[i]=r;
        i++;
        a=a/10;
    }
    for(j=0;j<i;j++)
    {
        for(f=j+1;f<i;f++)
        {
            if(b[j]==b[f]){
    m++;
    break;}
        }}
        if(m>0)
        printf("yes");
        else
        printf("no");
}
