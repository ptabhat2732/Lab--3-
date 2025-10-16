#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0, mean;
    printf("Enter how many values: ");
    scanf("%d", &n);
    float numbers[n];
    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }
    mean = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
    return 0;
}
