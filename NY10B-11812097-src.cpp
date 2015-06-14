#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t, s, b, x, y, u[50], v[50], w[50];

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d %d", &s, &b, &x, &y);

        int i = 0;
        while (x > 0) {
            u[i++] = x % b;
            x = x / b;
        }

        int j = 0;
        while (y > 0) {
            v[j++] = y % b;
            y = y / b;
        }

        int k = 0;
        while (k < i && k < j) {
            w[k] = (u[k] + v[k]) % b;
            k++;
        }

        while (k < i) {
            w[k] = u[k];
            k++;
        }

        while (k < j) {
            w[k] = v[k];
            k++;
        }

        int sum = 0, m;
        for (int m = 0; m < k; m++)
            sum = sum + w[m] * pow(b, m);

        printf("%d %d\n", s, sum);
    }

    return 0;
}
