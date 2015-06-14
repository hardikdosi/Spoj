#include <iostream>
#include <cstdio>
#include <algorithm>

#define MAX 105

int dp[MAX][MAX];
int a[MAX][MAX];

using namespace std;

int calculate(int m, int n)
{
    for (int i=1; i<=n; i++) {
        dp[0][i] = a[i-1][0];
    }

    for (int i=0; i<m; i++) {
        dp[i][0] = -1;
        dp[i][n+1] = -1;
    }

    for(int i=0; i<m; i++) {
        for (int j=1; j<=n; j++) {
            dp[i][j] = a[i][j-1] + max(dp[i-1][j], max(dp[i-1][j-1], dp[i-1][j+1]));
        }
    }

    return *max_element(dp[m-1], dp[m-1]+n+2);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int m, n;
        scanf("%d %d", &m, &n);
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        printf("%d\n", calculate(m, n));
    }
    return 0;
}
