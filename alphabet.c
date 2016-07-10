#include <stdio.h>
int main(void) {
  char a;
  printf("\n Enter the character:");
  scanf("%c",&a);
  if(isalpha(a))
  {
    printf("\n It is an alphabet");
  }
  else
  {
    printf("\n It is not an alphabet");
  }

	return 0;
}
