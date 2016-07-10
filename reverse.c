#include<stdio.h>
int main(void) {
   int num,digit,rev=0;
   printf("\n Enter the number to be reversed:");
   scanf("%d",&num);
   while(num!=0)
   {
       digit=num%10;
       rev=rev*10+digit;
       num=num/10;
   }
   printf("\n Reversed number is:%d",rev);
	return 0;
}
