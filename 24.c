#include<stdio.h>

int main()
{
    char a[100];
    int i,l=0,k=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        k++;
        if((a[i]>=48)&&(a[i]<=57))
        l++;
    }
    if(l==k)
    printf("yes");
    else
    printf("no");
    return 0;
}
