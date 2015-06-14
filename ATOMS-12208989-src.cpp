#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;
    long long n, k, m;
    scanf("%d", &t);

    while (t--) {
        int cnt = 0;
        scanf("%lld %lld %lld", &n, &k, &m);

        if (n < m) {
            while (n <= m / k) {
                cnt++;
                n *= k;
            }

            printf("%d\n", cnt);
        } else
            printf("0\n");
    }

    return 0;
}
