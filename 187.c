#include<stdio.h>

int main() {
  char a[100];
  int i,c[100],m=0,b=0,v=0,f=0;
  scanf("%[^\n]",a);
  for(i=0;a[i]!=' ';i++)
  {
          v++;
      }
     for(i=v+1;a[i]!='\0';i++)
      {
          b++;
      }
      c[m]=v;
      m++;
      c[m]=b;
      m++;
    for(i=0;i<m;i++)
    {
        if((c[i+1]-c[i])==1)
        f++;
    }
    if(f!=0)
    printf("yes");
    else
    printf("no");
}
