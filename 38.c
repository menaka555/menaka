#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i%2==0)
            {
            printf("%d\t",i);}
        }
}
return 0;
}
    
    
