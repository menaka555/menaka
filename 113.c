#include<stdio.h>
int main()
{
    char z='/',a[100];
    int i,l=0,m=0,n=0,o=0,p=0,h=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==z)
        {
            l++;
        }
    }
    for(i=0;i<2;i++)
        {
            if((a[i]=='0')&&(a[i+1]<='9')||(a[i]=='2')&&(a[i+1]<='9')||(a[i]=='3')&&(a[i+1]<='1')||(a[i]=='1')&&(a[i+1]<='9')){
        m++;
    }}
    for(i=2;i<3;i++)
    {
        if(a[i]==z)
        {
            n++;
        }
        }
        for(i=3;i<5;i++)
        {
            if((a[i]=='0')&&(a[i+1]<='9')||(a[i]=='1')&&(a[i+1]<='2')){
            o++;
        }}
        for(i=5;i<6;i++)
        {
            if(a[i]==z)
            {
                p++;
            }
        }
        for(i=6;a[i]!='\0';i++)
        {
            h++;
        }
if((l==2)&&(m==2)&&(n==1)&&(o==1)&&(p==1)&&(h==4))
printf("yes");
else
printf("no");
return 0;
}
