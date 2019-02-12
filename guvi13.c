#include<stdio.h>

int main() {
   int i,s,sum=0,rem=0;
   scanf("%d",&s);
    while(s)
    {
        rem=s%10;
        sum=sum+rem*rem;
        s=s/10;
    }
    printf("%d",sum);
  
   return 0;
}
