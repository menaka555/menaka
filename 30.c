#include<stdio.h>
int main(){
    char a[100],b[100];
    int k,i,j,l=0;
    scanf("%s",a);
      scanf("%s",b);
      scanf("%d",&k);
      for(i=0;a[i]!='\0';i++)
      {
          if(a[i]!=b[i])
          l++;
      }
      if(l==k)
      {
      printf("yes");}
      else
      printf("no");
      
      return 0;
}
