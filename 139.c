#include<stdio.h>
int main()
{
    int i,a,f=0,b=1,r=0,c=0;
    scanf("%d",&a);
    while(a)
    {
        r=a%2;
        f=f+(b*r);
        b=b*10;
        a=a/2;
    }r=0;
    while(f)
    {
        r=f%10;
        if(r==1){
        c++;}
        f=f/10;
        
    }
    printf("%d",c);
}
    
