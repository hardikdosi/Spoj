#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int ETF(int);

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        printf("%d\n", ETF(n));
    }

    return 0;
}

int ETF(int x) // Phi(n) = n * (1 - 1/p1) * (1 - 1/p2) *...*(1 - 1/pk);  where p1, p2, ..., pk are prime factors of n
{
    int ans = x, rt = sqrt(x);

    for (int i = 2; i <= rt; i++) {
        if (x % i == 0) {
            ans = ans - ans / i;

            while (x % i == 0)
                x = x / i;
        }
    }

    if (x > 1)
        ans = ans - ans / x;

    return ans;

}
