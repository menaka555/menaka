#include<stdio.h>
int main(){
    int n,rem=0,l=0,k;
    scanf("%d",&n);
    scanf("%d",&k);
    while(n)
    {
        rem=n%10;
        n=n/10;
        if(rem==k)
        {
            l++;
        }
    }
    printf("%d",l);
return 0;
}
    
    
