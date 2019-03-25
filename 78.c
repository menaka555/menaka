#include<stdio.h>
int main()
{
   long int a[100],b[100],i,j,c[100000],n,m,k=0,t=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
    c[k]=a[i];
    k++;
    }
    for(i=0;i<m;i++){
    scanf("%d",&b[i]);}
    for(i=0;i<m;i++){
    c[k]=b[i];
    k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(c[i]>c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
   for(i=0;i<k;i++)
    {
        printf("%ld",c[i]);
    }}
    
