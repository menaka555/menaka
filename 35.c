#include<stdio.h>
int main(){
    char a[100];
    int i,l=0,k=0,j;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        k++;
    }
        for(i=0;i<k;i++)
        {
            l=0;
            for(j=i+1;j<k;j++)
            {
        if(a[i]==a[j])
        {
            a[j]='$';
            l++;
        }
            }
            if(l!=0)
            {
                a[i]='$';
            }
        }
            for(i=0;i<k;i++)
            {
                if(a[i]!='$')
                {
                    printf("%c ",a[i]);
                }
            }
            return 0;
}
        
