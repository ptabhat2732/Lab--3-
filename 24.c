#include <stdio.h>
int main()
{
    int numbers[100];
    int i, largest, smallest;
    printf("Enter 100 numbers:\n");
    for(i = 0; i < 100; i++)
    {
        scanf("%d", &numbers[i]);
    }
    largest = smallest = numbers[0];
    for(i = 1; i < 100; i++)
    {
        if(numbers[i] > largest)
            largest = numbers[i];
        if(numbers[i] < smallest)
            smallest = numbers[i];
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
