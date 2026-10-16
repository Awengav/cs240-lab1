#include <stdio.h>

int main() {
    int a = 48;
    int b = 18;
    int original_a = a;
    int original_b = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("The GCD of %d and %d is %d\n", original_a, original_b, a);
    return 0;
}