#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int NOB(long long x);

int power(int x)
{
    int a = 1;
    for (int i = 0; i < x; i++)
        a = a * 2;

    return a;
}

int main()
{
    int t;
    long long n;

    scanf("%d", &t);

    while (t--) {
        scanf("%lld", &n);

        int tmp = NOB(n);
        int odd = power(tmp);

        printf("%lld %d\n", n - odd + 1, odd);
    }

    return 0;
}

int NOB(long long x)
{
    int ct = 0;

    while (x > 0) {
        int r = x % 2;
        if (r == 1)
            ct++;

        x = x / 2;
    }

    return ct;
}
