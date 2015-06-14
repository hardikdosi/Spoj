#include <cstdio>

#define ull unsigned long long

using namespace std;

ull gcd(ull m, ull n);

int main()
{
    int t;
    ull x;

    scanf("%d", &t);

    while(t--) {
        scanf("%llu", &x);

        if (x == 1)
            printf("%d\n", 0);

        for (ull i = x/2; i > 0; i--) {
            if (gcd(i, x) == 1) {
                printf("%llu\n", i);
                break;
            }
        }
    }

    return 0;
}

ull gcd(ull m, ull n)
{
    ull r = 1;

    while (r > 0) {
        r = n % m;
        n = m;
        m = r;
    }

    return n;
}
