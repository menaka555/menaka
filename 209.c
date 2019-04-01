#include<stdio.h>

int main() {
  int a[100][100],n,i,j,s=1,f=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
  {
      scanf("%d",&a[i][j]);
  }}
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(i==j)
          {
        s=s*a[i][j];  
      }
  }}
  for(i=0;i<n;i++)
  {
      for(j=n-1-i;j>=0;j--)
      {
          
          f=f*a[i][j]; 
          break;
      }}
      printf("%d",f+s);
}
