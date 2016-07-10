#include<stdio.h>
int main()
{
int a,b,c;
printf("\n Enter the integer values of A , B and C:");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
printf(" A = %d is the  largest number",a);
}
else if(b>c)
{
printf(" B = %d is the largest number",b);
}
else
{
printf(" C = %d is the largest number",c);
}
return 0;
}
