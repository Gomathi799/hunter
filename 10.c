#include<stdio.h>
void main()
{
    int n,a[1000],i,j,k,t=0,b[1000],m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                t++;
            }
        }
    }
    if(t==m)
    printf("YES");
    else
    printf("NO");
}
