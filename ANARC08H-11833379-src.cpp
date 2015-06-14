#include <cstdio>

using namespace std;

int josephus(int n, int k);

int main()
{
    int t, n, d;

    while (1) {
        scanf("%d %d", &n, &d);

        if(n == 0 && d == 0)
            break;

        int ans = josephus(n, d);

        printf("%d %d %d\n", n, d, ans);
    }

    return 0;
}

int josephus(int n, int k)
{
    int r, i = 1;

    while (i <= n) {
        r = (r + k) % i;
        i++;
    }

    return (r + 1);
}
