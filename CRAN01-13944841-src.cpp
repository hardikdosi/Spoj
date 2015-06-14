#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int mod(int x)
{
	if (x<0)
		return -x;
	return x;
}

int main()
{
	int t, r, c, x, y;
	scanf("%d", &t);

	while (t--) {
		scanf("%d %d", &r, &c);
		scanf("%d %d", &x, &y);

		int u = mod(1-x)+mod(1-y);
		int v = mod(1-x)+mod(c-y);
		int w = mod(r-x)+mod(1-y);
		int z = mod(r-x)+mod(c-y);

		printf("%d\n", max(u, max(v, max(w, z))));
	}

	return 0;
}