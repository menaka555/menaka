#include<stdio.h>

int main() {
  int a,b,c,h=0;
  scanf("%d%d%d",&a,&b,&c);
  if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
  h++;
  if(h!=0)
  printf("yes");
  else
  printf("no");
}
