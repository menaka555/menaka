#include<stdio.h>

int main() {
  char a[100];
  int i,k=0,l=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
      l++;
  }
  for(i=l-1;i>=0;i--)
  {
      if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o') ||(a[i]=='u'))
      {
      k++;
      }
if(k==0)
{
printf("%c",a[i]);
}
k=0;
}
return 0;
}
