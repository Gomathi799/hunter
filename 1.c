#include<stdio.h>
int main()
{
int n,a[100],i,j,c[100],k=0,t=0,l=0,m=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}


for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
    l=0;
c[k]=a[j];
k++;
a[j]='$';
l++;
}}
if(l!=0)
a[i]='$';
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
}}}
for(i=0;i<k;i++)
{
    if(c[i]!='$'){
printf("%d ",c[i]);
}}
if(k==0)
printf("unique");
return 0;
}
