#include<stdio.h>
int main(){
    int i,n,k,l=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        if(i==k)
        l++;
    }
    if(l!=0)
    printf("yes");
    else
    printf("no");
    return 0;
}
    
    
