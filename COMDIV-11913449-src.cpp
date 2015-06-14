#include <cstdio>
#include <cmath>

using namespace std;

int gcd(int, int);

int main()
{
    int t, a, b, count, x, rt, g;

    scanf("%d", &t);

    while (t--) {
        count = 0;

        scanf("%d %d", &a, &b);

        g = gcd(a, b);

        rt = sqrt(g);

        for (int i = 1; i <= rt; i++) {
            if (g % i == 0) {
                count++;

                x = g / i;
                if (x != i)
                    count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

int gcd(int m, int n)
{
    int r = 1;

    while (r > 0) {
        r = n % m;
        n = m;
        m = r;
    }

    return n;
}
