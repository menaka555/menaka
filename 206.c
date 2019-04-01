#include<stdio.h>

int main() {
  char a[100000];
  int i,j,h=0,f=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      if((a[i]>='A')&&(a[i]<='F')||(a[i]>=49)&&(a[i]<=57))
      {
          h++;
      }
      else{
      f++;
  }}
  if(f!=0)
  printf("no");
  else
   printf("yes");
}
