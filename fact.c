#include <stdio.h>
int main()
{
    int n, i;
    int factorial = 1;
    printf("Enter an integer: \n");
    scanf("%d",&n);
     if (n < 0)
        printf("Factorial of a negative number doesn't exist.");
        else
    {
    for(i=1; i<=n; ++i)
        {
            factorial=factorial*i;              
        }
        printf("Factorial of %d = %d", n, factorial);
    }
    return 0;
}
