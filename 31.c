#include<stdio.h>
int main(){
    char a[100];
    int i,l=0,d=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(')
        l++;
        else
        d++;
    }
    if(l==d)
    printf("yes");
    else
    printf("no");
    return 0;
}
