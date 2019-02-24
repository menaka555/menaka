#include<stdio.h>
int main(){
    int a,k=2,i,l=0;
    scanf("%d",&a);
    k=2;
    for(i=0;i<a;i++)
    {
        k=k*2;
        if(k==a)
        {
            l++;
            break;
        }
    }
    if((l!=0)||(a==1))
    printf("yes");
    else if(l==0)
    printf("no");
    return 0;
}
