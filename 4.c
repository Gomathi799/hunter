#include<stdio.h>
void main()
{
    int n,a[1000],i,j,k,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        t=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='$';
                t=1;
            }
        }
        if(t==1)
        {
            a[i]='$';
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='$')
        {
            printf("%d ",a[i]);
        }
    }
}
