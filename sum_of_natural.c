#include <stdio.h>
int main(void) {
  int n,i,s=0;
  printf("\n Enter the value of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    s=s+i;
  printf("\n Sum of N natural number is %d ",s);
  return 0;
}
