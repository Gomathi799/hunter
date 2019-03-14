#include<stdio.h>
void main()
{
    int n,a[10000],i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(k=n-1;k>=0;k--)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==a[k])
                {
                printf("%d %d %d\n",a[i],a[j],a[k]);
                }
            }
        }
    }
}
