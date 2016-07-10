#include <stdio.h>
int main(void) {
	int a[10],i,sum=0;
	float avgerage;
  printf("\n Enter the integer array values for a:");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
     for(i=0;i<10;i++)
 sum=sum+a[i];
 avgerage=sum/10;
 printf("\n Average of an given array is %f",avgerage);
 	return 0;
}
