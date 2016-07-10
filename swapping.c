#include <stdio.h>
int main(void) {
	int a,b,t=0;
  printf("\n Enter the integer value for swapping a and b:");
  scanf("%d%d",&a,&b);
  printf("\n value of a and b before swapping is %d and %d",a,b);
  t=a;
  a=b;
  b=t;
    printf("\n value of a and b after swapping is %d and %d",a,b);
 
	return 0;
}
