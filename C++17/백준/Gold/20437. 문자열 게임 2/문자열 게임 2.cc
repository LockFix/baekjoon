#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int min = 10001;
        int max = 0;

        char W[10000];
        scanf("%s", W);
        int K;
        scanf("%d", &K);

        if (K == 1) {
            printf("1 1\n");
            continue;
        }

        int alphabet[26];
        for (int j = 0; W[j] != NULL; j++) {
            alphabet[W[j] - 'a']++;
        }
        for (int j = 0; (W[j] != NULL) && j < 10000; j++) {
            if (alphabet[W[j] - 'a'] < K) continue;
            int count = 1;

            for (int k = j + 1; (k < 10000) && (W[k] != NULL); k++) {
                if (W[j] == W[k]) count++;
                if (count == K) {
                    if (min > (k - j + 1)) min = k - j + 1;
                    if (max < (k - j + 1)) max = k - j + 1;
                    break;
                }
            }
        }
        if ((min == 10001) || (max == 0)) {
            printf("-1\n");
            continue;
        }
        printf("%d %d\n", min, max);
    }

    return 0;
}