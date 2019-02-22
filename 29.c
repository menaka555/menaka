#include<stdio.h>

int main() {
  int a,b,i,t=1,l=0,j;
  scanf("%d%d",&a,&b);
  for(i=a;i<b;i++)
  {
      for(j=2;j<i;j++)
      {
          if(j*j==i)
      {
      l++;}}}
      printf("%d",l);
      return 0;
}
   
