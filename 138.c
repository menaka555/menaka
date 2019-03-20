#include<stdio.h>
int main()
{
    int n,a[100],k=0,i,m=2;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        m=m*2;
        if(m==n){
        printf("yes");
        break;
            k++;
        }
    }
    if(k==0)
    printf("no");
}
        
        
    
