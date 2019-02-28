#include<stdio.h>
int main()
{
    char a[1000],c[1000],d[1000];
    int i,l=0,k=0,j,m=0,o=0,t=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        l=0;
    for(j=i+1;a[j]!='\0';j++)
    {
        if(a[i]==a[j])
        {
            a[j]='$';
        l++;
    }
    }
    if(l>0)
    {
        if(a[i]!='$')
    {
    c[k]=a[i];
    k++;
}}}
t=0;
for(j=0;j<k;j++)
{
    m=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(c[j]==a[i])
        {
            m++;
            }}
            if(m>=t)
            {
            t=m;
            }
            d[o]=c[j];
            
    }
    for(i=0;i<1;i++)
    {
    printf("%c",d[i]);
}
return 0;
}
