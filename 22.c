#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int count = 0;
    for (int i = 2; i <= 500; i++) {
        if (is_prime(i)) {
            count++;
        }
    }
    printf("The number of prime numbers between 1 and 500 is: %d\n", count);
    return 0;
}
