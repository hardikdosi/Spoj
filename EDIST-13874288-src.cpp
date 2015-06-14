#include <iostream>
#include <cstdio>
#include <string>

#define MAX 2050

int dp[MAX][MAX];

using namespace std;

int compute(string &a, string &b)
{
    int m = a.size();
    int n = b.size();

    for (int i=0; i<=m; i++)
        dp[i][0] = i;

    for (int i=0; i<=n; i++)
        dp[0][i] = i;

    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            dp[i][j] = min(dp[i-1][j]+1, min(dp[i][j-1]+1, (a[i-1]==b[j-1]) ? (dp[i-1][j-1]) : (1+dp[i-1][j-1])));
        }
    }

    return dp[m][n];
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << compute(a, b) << endl;
    }

    return 0;
}
