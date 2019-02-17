#include<stdio.h>

int main() {
  int a,i,b[1000],k=0,j,l=0,m;
  scanf("%d",&a);
  for(i=2;i<a;i++)
  {
      if(a%i==0)
  {
  for(m=2;m<i;m++)
  {
      if(i%m==0)
      {
      l++;
      break;
      }}
  
  if(l==0)
  {
  printf("%d\t",i);
  }}}
  return 0;
}
      
     
