#include<stdio.h>
void main()
{
    int n,a[1000],i,j,k,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d",a[i]);
                t++;
                break;
            }
        }
        if(t>0)
        break;
    }
    if(t==0)
        printf("unique");
}
