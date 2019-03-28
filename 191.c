#include<stdio.h>

int main() {
  int a[100],b[100],n,c[200],k=0,i,h=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  scanf("%d",&b[i]);
  for(i=n-1;i>=0;i--)
  {
      c[k]=b[i];
      k++;
  }
  for(i=0;i<n;i++)
  {
      if(a[i]!=c[i])
      {
          h++;
          break;
      }}
      if(h==0)
      printf("yes");
      else
      printf("no");
}
  
