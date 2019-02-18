#include<stdio.h>

int main() {
  char a[100];
  int i,b=0,c=0,d=0,e=0,k=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]=='I')
      {
      if(a[i+1]=='V')
      {
          b=4;
          i++;
      }
      else if(a[i+1]=='X')
      {
          b=9;
          i++;
      }
      else
      b=b+1;
      }
  else if(a[i]=='V')
  c=5;
 else if(a[i]=='X')
 {
  d=10;
  if(a[i+1]=='X')
 {
  d=10+10;
  break;
  }
 }
  }
e=b+c+d;
printf("%d",e);
return 0;
}
 
      
     
