#include <stdio.h>

int main()
{
    int n, m, x;

    for (m = 2; m < M; m++)
        for (n = 1; n < m; n++)
            for (x = 1; x * (m * m + n * n) < M; x++)
                printf("%d %d %d\n", x * (m * m - n * n), 2 * x * n * m, x * (m * m + n * n));

    return 0;
}