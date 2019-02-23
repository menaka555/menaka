#include<stdio.h>
int main()
{
    char a[100],c;
    int i,l=0;
    scanf("%s %c",a,&c);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==c)
        {
    l++;
    }}
    printf("%d",l);
    return 0;
}
