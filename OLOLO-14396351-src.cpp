#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	vector<int> v(t);
	for (int i=0; i<t; i++) {
		scanf("%d", &v[i]);
	}

	int ans=v[0];
	for (int i=1; i<t; i++) {
		ans = ans^v[i];
	}

	printf("%d\n", ans);

	return 0;
}
