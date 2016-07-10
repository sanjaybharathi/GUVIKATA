#include <stdio.h>
void tow(int,char,char,char);
void main()
{
int n;
scanf("%d",&n);
tow(n,'X','Y','Z');
}
void tow(int n,char src,char tm,char dest)
{
if(n==1)
{
printf("\n Move disk 1 from src %c to dest %c",src,tm);
return;
}
tow(n-1,src,dest,tm);
printf("\n Move disk %d from src %c to dest %c",n,src,tm);
tow(n-1,dest,tm,src);
}
