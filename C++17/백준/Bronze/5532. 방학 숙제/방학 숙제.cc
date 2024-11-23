#include <math.h>
#include <stdio.h>
int main() {
    int L, A, B, C, D;
    scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
    if (A % C != 0)
        C = A / C + 1;
    else
        C = A / C;
    if (B % D != 0)
        D = B / D + 1;
    else
        D = B / D;

    printf("%d", L - (C > D ? C : D));

    return 0;
}