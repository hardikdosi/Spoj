#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    while (1) {
        int a[4], b[4], c[4], max, tmp;

        for (int i = 0; i < 4; i++) scanf("%d", &a[i]);
        for (int i = 0; i < 4; i++) scanf("%d", &b[i]);

        if (a[0] == -1) break;

        for (int i = 0; i < 4; i++) {
            if (a[i] == 0)
                c[i] = 0;
            else if (a[i] > b[i]) {
                tmp = a[i] % b[i];

                if (tmp == 0)
                    c[i] = a[i] / b[i];
                else
                    c[i] = (a[i] - tmp) / b[i] + 1;
            } else
                c[i] = 1;
        }

        max = c[0];
        for (int i = 1; i < 4; i++) {
            if (c[i] > max)
                max = c[i];
        }

        for (int i = 0; i < 4; i++) printf("%d ", max * b[i] - a[i]);

        printf("\n");
    }

    return 0;
}
