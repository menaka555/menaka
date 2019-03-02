#include<stdio.h>

int main() {
  int n,k=1,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      k=k*i;
  }
     printf("%d",k);
     return 0;
}
