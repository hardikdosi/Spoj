#include <cstdio>
#include <limits.h>
#include <cstring>

#define MAX 100050

using namespace std;

typedef long long ll;

ll merge(int p, int q, int r);
ll merge_sort(int p, int r);

ll a[MAX];

int main()
{
	int tt;
	scanf("%d", &tt);

	while (tt--) {
		int t;
		scanf("%d", &t);

		for (int i=0; i<t; i++)
			scanf("%lld", &a[i]);

		printf("%lld\n", merge_sort(0, t - 1));
	}

	return 0;
}

ll merge_sort(int p, int r)
{
	ll ans = 0;
	if (p < r) {
		int q = (p + r) / 2;

		ans += merge_sort(p, q);
		ans += merge_sort(q+1, r);
		ans += merge(p, q, r);
	}
	return ans;
}

ll merge(int p, int q, int r)
{
	int n1, n2;

	n1 = q - p + 1;
	n2 = r - q;

	ll L[n1 + 1], R[n2 + 1];

	for (int i=0; i<n1; i++)
		L[i] = a[p+i];

	for (int i=0; i<n2; i++)
		R[i] = a[q+i+1];

	L[n1] = R[n2] = INT_MAX;

	int i=0, j=0;
	ll cnt = 0;
	while (j<n2) {
		while (L[i]<R[j] && i<n1) {
			cnt += (n2-j)*L[i];
			i++;
		}
		j++;
	}

	i=j=0;
	for (int k = p; k <= r; k++) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		} else {
			a[k] = R[j];
			j++;
		}
	}
	
	return cnt;
}