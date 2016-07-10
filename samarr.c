#include<stdio.h>
int main()
{
int x,y,z[50],d[50],n,t;
for(x=0;x<n;x++)
{
scanf("Enter %d",&z[x]);
z[x]=d[y];
}
for(y=0;y<n;y++)
{
scanf("%d",&z[y]);
}
for(x=0;x<n;x++)
{
for(y=0;y<n;y++)
{
if(d[x]>z[y])
{
t=z[x];
z[x]=z[y];
z[y]=t;
t=d[x];
z[x]=d[y];
d[y]=t;
}
else if(d[x]==d[x+1])
{
if(z[x]>z[y])
{
t=z[x];
z[x]=z[y];
z[y]=t;
}
}
}
}
for(x=0;x<n;x++)
{
printf("%d",z[x]);
}
return 0;
}
