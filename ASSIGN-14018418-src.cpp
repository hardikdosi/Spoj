#include <cstring>
#include <iostream>
#include <cstdio>

#define MAX 25

using namespace std;
typedef long long ll;

ll dp[1<<MAX];
int a[MAX][MAX];

int count_on_bits(int x)
{
    int cnt=0;
    while (x>0) {
        if (x&1)
            cnt++;
        x=x>>1;
    }
    return cnt;
}

int is_on(int i, int k)
{
    return (i & (1<<k));
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        memset(dp, 0, sizeof(dp));
        dp[0]=1;
        for (int i=0; i<(1<<n); i++) {
            int j = count_on_bits(i);

            for (int k=0; k<n; k++) {
                if (a[j-1][k] && i&(1<<k)) {
                    dp[i] += dp[i & ~(1<<k)];
                }
            }
        }

        printf("%lld\n", dp[(1<<n) - 1]);
    }

    return 0;
}
