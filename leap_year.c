#include <stdio.h>
int main(void) {
  int year;
  printf("\n Enter the year:");
  scanf("%d",&year);
  if((year%4)==0)
  {
    printf("\n It is a leap year");
  }
  else
  {
    printf("\n It is not a leap year");
  }
	return 0;
}
