#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long ll;

ll f(ll n);

ll a[10000];

int main()
{
    a[0] = 0;
    for (ll i = 1; i <= 10000; i++) {
        a[i] = max(i, a[i/2] + a[i/3] + a[i/4]);
    }

    ll n;
    while (scanf("%lld", &n) != EOF) {
        printf("%lld\n", f(n));
    }

    return 0;
}

ll f(ll n)
{
    if (n >= 0 && n <= 10000)
        return a[n];

    return max(n, f(n/2) + f(n/3) + f(n/4));
}

