#include<stdio.h>

int main() {
    char a[100];
    int i,j,r=0,d=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=48)&&(a[i]<=57))
        d++;
    }
    if(d==0)
    {
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
         if(a[i]==a[j])
                {
                a[j]='$';
                r++;
            }
        

    }}
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]!='$')&&(r>0)){
        printf("%c",a[i]);
    }}}
}
