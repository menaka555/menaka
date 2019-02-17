#include<stdio.h>

int main() {
  char a[100];
  int i,k=0,l;
  scanf("%d",&l);
  for(i=0;i<l;i++)
  {
      scanf("%c",&a[i]);
  }
  for(i=l-1;i>=0;i--)
  {
      if((a[i]>=97)&&(a[i]<=122))
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
else
printf("%c",a[i]);
}
return 0;
}
