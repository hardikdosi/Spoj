#include <iostream>
#include <cstdio>
#include <map>

typedef long long ll;

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--) {
		map<int, int> m1, m2, ans;
		int m, n;
		scanf("%d %d", &m, &n);

		//calculate prime factorization of m
		for (int i=2; i*i<=m; i++) {
			if (m%i == 0) {
				while (m%i == 0) {
					m1[i] += 1;
					m = m/i;
				}
			}
		}
		if (m>1)
			m1[m] += 1;

		//calculate prime factorization of n
		for (int i=2; i*i<=n; i++) {
			if (n%i == 0) {
				while (n%i == 0) {
					m2[i] += 1;
					n = n/i;
				}
			}
		}
		if (n>1)
			m2[n] += 1;

		map<int, int>::iterator x;
		for (x=m1.begin(); x != m1.end(); x++) {
			if (x->second > m2[x->first])
				ans[x->first] = x->second;
		}

		for (x=m2.begin(); x != m2.end(); x++) {
			if (x->second > m1[x->first] && x->second > ans[x->first])
				ans[x->first] = x->second;
		}

		ll a=1;
		for (x=ans.begin(); x!=ans.end(); x++) {
			for (int j=0; j < x->second; j++)
				a = a * (ll)x->first;
		}
		printf("%lld\n", a);
	}

	return 0;
}