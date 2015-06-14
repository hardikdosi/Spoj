#include <cstdio>

using namespace std;

int gcd(int, int);

int main()
{
    int t, a, b;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &a, &b);

        int x = gcd(a, b);

        printf("%d %d\n", b / x, a / x);
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
