#include<stdio.h>
int main()
{
    char a[100];
    int i,f=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]!='a')&&(a[i]!='b'))
        f++;
    }
    if(f==0)
    printf("yes");
    else
    printf("no");
}
