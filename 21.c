#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("%d! = ", n);
        for (i = n; i >= 1; i--)
        {
            printf("%d", i);
            fact *= i;
            if (i > 1)
            {
                printf("*"); 
            }
        }
        printf(" = %llu\n", fact);
    }
    return 0;
}
