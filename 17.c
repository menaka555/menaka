#include<stdio.h>

int main() {
  int l,r,i;
  scanf("%d%d",&l,&r);
  for(i=l;;i++)
  {
      if((i%l==0)&&(i%r==0))
      {
          printf("%d",i);
          break;
      }
  }
  return 0;
}
