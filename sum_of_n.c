#include <stdio.h>
int main(void) {
  int n,i,sum=0;
  printf("\n Enter the value of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    sum=sum+i;
  printf("\n Sum of N natural number is %d ",sum);
  return 0;
}
