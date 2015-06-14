#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int lcs(vector<int>& a, vector<int>& b)
{
	int m = a.size();
	int n = b.size();
	int L[m+1][n+1];

	for (int i=0; i<=m; i++) {
		for (int j=0; j<=n; j++) {
			if (i==0 || j==0)
				L[i][j] = 0;
			else if (a[i-1] == b[j-1])
				L[i][j] = L[i-1][j-1] + 1;
			else {
				L[i][j] = max(L[i-1][j], L[i][j-1]);
			}
		}
	}

	return L[m][n];
}

int main()
{
	int t;
	scanf("%d", &t);

	while (t--) {
		vector<int> x, y;
		int var, max_val = 0;
		while (true) {
			scanf("%d", &var);
			if (var == 0)
				break;
			x.push_back(var);
		}
		int z;
		while (true) {
			y.clear();
			scanf("%d", &z);
			if(z == 0)
				break;
			else
				y.push_back(z);
			
			while (true) {
				scanf("%d", &var);
				if (var == 0)
					break;
				y.push_back(var);
			}
			int ll = lcs(x, y);
			max_val = max(max_val, ll);
		}

		printf("%d\n", max_val);
	}

	return 0;
}