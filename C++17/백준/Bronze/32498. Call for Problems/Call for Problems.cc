#include <stdio.h>
int main()
{
    int N;
    int count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int a;
        scanf("%d", &a);
        if (a % 2 != 0)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}