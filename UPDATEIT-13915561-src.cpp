#include <iostream>
#include <cstdio>
#include <cstring>

#define MAX 10050

using namespace std;

int a[MAX];

int main()
{
	int t, n, u;
	scanf("%d", &t);
	
	while (t--) {
		memset(a, 0, sizeof(a));
		scanf("%d %d", &n, &u);

		int l, r, val;
		for (int i=0; i<u; i++) {
			scanf("%d %d %d", &l, &r, &val);
			a[l] += val;
			a[r+1] = a[r+1] - val;
		}

		for (int i=1; i<MAX; i++) {
			a[i] += a[i-1];
		}

		int q, index;
		scanf("%d", &q);

		for (int i=0; i<q; i++) {
			scanf("%d", &index);
			printf("%d\n", a[index]);
		}
	}

	return 0;
}