#include <stdio.h>

int main() {
    int a = 15;
    int b = 15;
    int b_count = 0;

    printf("(A)\t(B)\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\t", a);
        a += 9;

        if (b_count < 2) {
            printf("%d\n", b);
            b_count++;
        } else {
            b += 9;
            printf("%d\n", b);
            b_count = 1;
        }
    }
    
    // Print the last term for series (B)
    b += 9;
    printf("\t%d\n", b);

    return 0;
}
