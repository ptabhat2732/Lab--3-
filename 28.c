#include <stdio.h>
int main()
{
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Digits: ");
    int reversed = 0, temp = num;
    while (temp > 0)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    while (reversed > 0)
    {
        digit = reversed % 10;
        printf("%d", digit);
        reversed /= 10;
        if (reversed > 0)
            printf(", ");
    }
    return 0;
}
