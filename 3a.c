#include<stdio.h>
void main()
{
    int n,a[1000],i,j,k,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    
            if(a[i]==i)
            {
                printf("%d ",i);
                t++;
            }
        }
    if(t==0)
    printf("-1");
}
