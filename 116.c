#include<stdio.h>

int main() {
   int n,a[100],i,k=0,j,b[100],l=0,h=0,c[100],v=0,t=0,d[100],m=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       d[m]=a[i];
       m++;
   }
   for(i=0;i<m;i++)
   {
       
      for(j=i+1;j<m;j++)
      {
          if(a[i]==a[j])
          {
              a[i]='$';
              a[j]='$';
          }}}
          for(i=0;i<m+1;i++)
   {
       if(a[i]!='$')
       {
           c[h]=a[i];
           h++;
       }
       }
          
           for(i=0;i<m;i++)
   {
      for(j=i+1;j<m;j++)
      {
          if((d[i]!='$')&&(d[j]!='$'))
          {
          if(d[i]==d[j])
          {
              b[k]=d[i];
              k++;
              d[j]='$';
              l++;
          }
          
         
      }}
          if(l!=0)
          {
              d[i]='$';
          }
   }

      for(i=0;i<k;i++)
      {
          if(b[i]<b[i+1])
          {
              t=b[i];
              b[i]=b[i+1];
              b[i+1]=t;
          }}
          for(i=0;i<k;i++)
          {
          printf("%d ",b[i]);
      }
    for(i=0;i<h;i++)
    {
        if(c[i]<c[i+1])
       {
           v=c[i];
           c[i]=c[i+1];
           c[i+1]=v;
       }}
       for(i=0;i<h-1;i++)
       {
        printf("%d ",c[i]);
    }}
