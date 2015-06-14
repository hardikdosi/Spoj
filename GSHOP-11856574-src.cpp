#include<cstdio>

using namespace std;

int main()
{
    int t, n, c, non, i;
    long long sum;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &c);

        int a[n];
        sum = 0;

        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (non = 0; a[non] < 0 && non < n; non++);

        if (c < non) {
            for (i = 0; i < c; i++)
                a[i] = -1 * a[i];

            for (int j = 0; j < n; j++)
                sum += a[j];
        } else {
            for (i = 0; i < non; i++)
                a[i] = -1 * a[i];

            int flag = 0;
            for (int j = non; j < n; j++) {
                if (a[j] == 0) {
                    flag = 1;
                    break;
                }
            }

            c -= non;

            if (c % 2 == 1 && flag == 0) {
                int min, min_index = 0;
                min = a[0];

                for (int j = 0; j < n; j++) {
                    if (a[j] < min) {
                        min = a[j];
                        min_index = j;
                    }
                }

                a[min_index] = -1 * a[min_index];
            }

            for (int j = 0; j < n; j++)
                sum += a[j];
        }

        printf("%lld\n", sum);
    }

    return 0;
}
