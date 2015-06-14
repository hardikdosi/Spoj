#include <iostream>
#include <cstdio>

using namespace std;

typedef long long ll;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--) {
		ll N, T, K, P;
		scanf("%lld %lld %lld %lld", &N, &K, &T, &P);

		printf("%lld\n", N + ((P-N)/(K-1))*K);
	}

	return 0;
}
