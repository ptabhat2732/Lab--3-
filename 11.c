#include <stdio.h>
int main()
{
    int n, i;
    long long int a = 1, b = 1, next;
    printf("Enter how many terms you want: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == 2)
        {
            printf("%lld ", 1);
        }
        else
        {
            next = a + b;
            printf("%lld ", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
    return 0;
}
