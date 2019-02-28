#include<stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(((a>b)&&(b+b>a))||((a<b)&&(b+b>a)))
    printf("yes");
    else
    printf("no");
    return 0;
}
   
