#include <stdio.h>
int main() {
    double N;
    scanf("%lf", &N);

    while (N != 0) {
        printf("%.2lf\n", 1.0 + N + N * N + N * N * N + N * N * N * N);
        scanf("%lf", &N);
    }

    return 0;
}