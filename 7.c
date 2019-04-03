#include<stdio.h>
void main()
{
    int n,a[1000],i,j,k,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if((i%2==0&&a[i]%2!=0)||(i%2!=0&&a[i]%2==0))
        {
            printf("%d",a[i]);
        }
    }
}
