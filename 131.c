#include<stdio.h>

int main() {
   int a,i,b[100],m=0,j,s=0;;
       scanf("%d",&a);
       while(a)
       {
           j=a%10;
          if(j%2!=0)
          {
              b[m]=j;
              m++;
          }
          a=a/10;
       }
       for(i=0;i<m;i++)
       {
           s=s+b[i];
       }
       if(s%2==0)
       printf("E");
       else
       printf("O");
}
