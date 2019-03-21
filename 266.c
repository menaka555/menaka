#include<stdio.h>
int main()
{
    char a[100];
    int i,l=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            l++;
        }
    }
    if(l==2)
    {
       for(i=0;a[i]!='\0';i++)
       {
           if(a[i]!=' '){
           printf("%c",a[i]);
       }}
    }
    else
    printf("%s",a);
}
    
