#include<stdio.h>
int main()
{
    char a[100], b[100]={'k','a','b','a','l','i'};
    int n,i,j,k,r=0,v=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        for(j=0;b[j]!='\0';j++)
        {
            for(k=0;a[k]!='\0';k++)
            {
                if(b[j]==a[k])
                {
                    a[k]='$';
                    r++;
                break;
                }}
                if(r%6==0)
                {
                v++;}
            }
}
printf("%d",v);
return 0;
}
