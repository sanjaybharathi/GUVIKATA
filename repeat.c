#include<stdio.h>
#include<math.h>
int main()
{
   long int a[20],i,j,n,te,c;
   long int sum=0;
   
   scanf("%ld",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(a[j]>a[i])
 {
  te=a[i];
  a[i]=a[j];
  a[j]=te;
 }
 }
}
for(i=0;i<n-1;i++)
{
  te=a[i+1];
  c=0;
  while(te!=0)
  {
    te=te/10;
    c++;
  }
  sum=(sum*pow(10,c))+a[i+1];
}
printf("\n%ld",sum);
return 0;
}
