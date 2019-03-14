#include<stdio.h>
int main()
{
    char a[100];
    int i,j,l=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(j=l-1;j>=0;j--)
    {
        if(j%2==0)
        {
        printf("%c",a[j]);}
       else if(j%2!=0)
        {
            printf("-");
            printf("%c",a[j]);
            printf("-");
        }
    }
return 0;
}
