#include<stdio.h>

int main() {
    char a[100],b[100];
    int f=0,i,j;
    scanf("%[^\n]",a);
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++)
    {
        f=0;
        for(j=0;a[j]!='\0';j++)
        {
            if(b[i]==a[j]){
            f++;}
        }
        if(f!=0)
        {
            printf("%c",b[i]);
        }
    }
    return 0;
}
