#include<stdio.h>
int main()
{
   long int a,i,r=0,b[10000],k=0,c=0,d=0;
    scanf("%ld",&a);
    while(a)
    {
        r=a%10;
        b[k]=r;
        k++;
        a=a/10;
    }
    for(i=0;i<k-1;i++)
    {
        if((b[i]%2!=0)&&(b[i+1]%2==0))
        {
            c++;
        }
        else if((b[i]%2==0)&&(b[i+1]%2!=0))
        {
            d++;
        }
    }if((c!=0)||(d!=0))
    printf("%ld",c+d+1);
    else
    printf("%d",c+d);
    }
