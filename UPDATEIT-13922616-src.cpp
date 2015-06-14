#include <iostream>
#include <cstdio>
#include <cstring>

#define MAX 10050

using namespace std;

int ft[MAX];

void update_ft(int index, int val, int n)
{
	while (index <= n) {
		ft[index] += val;
		index += index&(-index);
	}
}

void range_update_ft(int l, int r, int val, int n)
{
	update_ft(l, val, n);
	update_ft(r+1, -val, n);
}

int cumulative_sum(int index, int n)
{
	int sum=0;
	while (index > 0) {
		sum += ft[index];
		index -= index&(-index);
	}

	return sum;
}

int main()
{
	int t;
	scanf("%d", &t);

	while (t--) {
		memset(ft, 0, sizeof(ft));
		
		int n, u;
		scanf("%d %d", &n, &u);
		
		int l, r, val;
		while (u--) {
			scanf("%d %d %d", &l, &r, &val);
			range_update_ft(l+1, r+1, val, n);
		}

		int q, index;
		scanf("%d", &q);
		while (q--) {
			scanf("%d", &index);
			printf("%d\n", cumulative_sum(index+1, n));
		}
	}

	return 0;
}