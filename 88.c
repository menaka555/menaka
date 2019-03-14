#include<stdio.h>

int main() {
   int n,k;
   int e=0;
   scanf("%d%d",&n,&k);
   e=n>>k;
   printf("%d",e);
   return 0;
}
