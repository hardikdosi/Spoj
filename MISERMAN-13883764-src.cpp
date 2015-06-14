#include <iostream>
#include <cstdio>
#include <algorithm>

#define MAX 105
#define inf 1000

int dp[MAX][MAX];
int a[MAX][MAX];

using namespace std;

int compute(int n, int m)
{
	for (int i=0; i<n; i++) {
		dp[i][0] = inf;
	}
	for (int i=0; i<n; i++) {
		dp[i][m+1] = inf;
	}
	for (int i=1; i<=m; i++) {
		dp[0][i] = a[0][i-1];
	}
	for (int i=1; i<n; i++) {
		for (int j=1; j<=m; j++) {
			dp[i][j] = a[i][j-1] + min(dp[i-1][j-1], min(dp[i-1][j], dp[i-1][j+1]));
		}
	}
	
	return *min_element(dp[n-1], dp[n-1]+m+2);
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("%d\n", compute(n, m));

	return 0;
}