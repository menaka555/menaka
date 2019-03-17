#include<stdio.h>

int main() {
  int n,a[100],s=0,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  s=a[0];
  for(i=0;i<n;i++)
  {
      s=s&a[i];}
  printf("%d",s);
  return 0;
}
