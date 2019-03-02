#include<stdio.h>

int main() {
  int n,k=1,i,a[100],j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++) {
        if(i<(i%2==0))
        {
            if(a[i]>a[i+1])
            printf("%d",a[i]);
            else
             printf("%d",a[j]);
        }
    }}
    return 0;
}
