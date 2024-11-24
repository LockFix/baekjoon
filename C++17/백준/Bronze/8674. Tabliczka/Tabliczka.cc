#include <stdio.h>
int main() {
    long a, b;
    scanf("%ld %ld", &a, &b);

    if (((a % 2) == 0) || ((b % 2) == 0)) {
        printf("0");
    } else if (a >= b) {
        long half1 = a / 2;
        long half2 = a - a / 2;

        printf("%ld", half2 * b - half1 * b);
    } else {
        long half1 = b / 2;
        long half2 = b - b / 2;

        printf("%ld", half2 * a - half1 * a);
    }

    return 0;
}