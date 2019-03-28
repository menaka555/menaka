#include<stdio.h>

int main() {
  int a,b,c,h=0,i,k=1,m=1,l=1;
  scanf("%d%d%d",&a,&b,&c);
  for(i=1;i<=2;i++)
  {
      k=k*a;
      l=l*b;
      m=m*c;
  }
  if((k+l)==m)
  printf("yes");
  else
  printf("no");
}
