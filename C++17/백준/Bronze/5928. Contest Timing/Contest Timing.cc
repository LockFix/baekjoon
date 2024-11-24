#include <stdio.h>
int main() {
    int D, H, M;
    scanf("%d %d %d", &D, &H, &M);

    if ((M - 11) < 0) {
        M = 60 + (M - 11);
        H--;
    } else
        M -= 11;
    if ((H - 11) < 0) {
        H = 24 + (H - 11);
        D--;
    } else
        H -= 11;
    D -= 11;

    if (D < 0) {
        printf("-1");
    } else
        printf("%d", 60 * 24 * D + H * 60 + M);

    return 0;
}