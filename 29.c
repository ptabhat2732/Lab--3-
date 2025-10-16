#include <stdio.h>
int main()
{
    int numbers[10];
    int i, sum = 0;
    float mean;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    mean = sum / 10.0;
    printf("\nSum = %d", sum);
    printf("\nMean = %.2f\n", mean);
    return 0;
}
