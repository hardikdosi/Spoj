#include <cstdio>

using namespace std;

int josephus(int n, int k);

int main()
{
    int t, n;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        int ans = josephus(n, n + 1);

        printf("%d\n", ans);
    }

    return 0;
}

int josephus(int n, int k)
{
    int r = 0, i = 1;

    while (i <= n) {
        r = (r + k) % i;
        i++;
    }

    return (r + 1);
}
