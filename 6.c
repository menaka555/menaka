#include<stdio.h>

int main() {
  char a[100],b[100],c[100];
  int i,j,k=0,l=0,m=0;
  scanf("%s",a);
  scanf("%s",b);
  for(i=0;a[i]!='\0';i++)
  {
          if(a[i]==a[i+1])
          {
              l++;
          }}
          for(j=0;b[j]!='\0';j++)
          {
              if(b[j]==b[j+1])
              {
                  m++;
              }
          }
  if(l==m)
  printf("isomorphic");
  else
  printf("no");
  return 0;
}
  
      
     
