#include <math.h>
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int count = 1;

    for (int i = 0; i < ceil((double)N / 6); i++) {
        int cnt = count + 6;
        for (; (count < cnt) && (count <= N); count++) {
            printf("%d ", count);
        }
        printf("Go! ");
    }
    return 0;
}