#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int t;
    long long sum, n, x;

    scanf("%d", &t);

    while (t--) {
        sum = 0;

        scanf("%lld", &n);

        vector<long long> v(n);

        for (long long i = 0; i < n; i++)
            scanf("%lld", &v[i]);

        x = -(n - 1);

        long long i = 0;
        while (x <= n - 1) {
            sum += x * v[i];
            x += 2;
            i++;
        }

        printf("%lld\n", sum);
    }

    return 0;
}
