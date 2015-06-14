#include <stdio.h>

int main()
{
    int t, n, j = 1, i;
    long long s, min_sum;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        int a[n];

        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        min_sum = 0;
        s = 0;

        for (i = 0; i < n; i++) {
            s += a[i];

            if (s < min_sum)
                min_sum = s;
        }

        printf("Scenario #%d: %lld\n", j++, -(min_sum) + 1);
    }

    return 0;
}

