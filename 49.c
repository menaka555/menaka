#include<stdio.h>
int main()
{
    int a,i,l=0;
    scanf("%d",&a);
        if((a>=-32768)&&(a<=32767))
        printf("INT");
        else
        printf("LONG");
        return 0;
}
    
