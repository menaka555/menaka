#include<stdio.h>

int main() {
  char a[100];
  int i,j;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='o'))
      {
          printf("%c",a[i]);
          a[i]='$';
      }
  }
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]!='$')
      {
        printf("%c",a[i]);  
      }
  }
}
