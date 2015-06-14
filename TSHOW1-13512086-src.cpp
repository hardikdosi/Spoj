#include <iostream>
#include <cstdio>
#include <cstring>

typedef long long ll;

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--) {
		ll n;
		scanf("%lld", &n);

		ll x=2, cnt=1;
		while (n>x) {
			n -= x;
			x = x<<1;
			cnt++;
		}
		n--;
		ll a[cnt], j = cnt-1;
		memset(a, 0, sizeof(a));
		while (n>0) {
			ll r=n%2;
			if(r) {
				a[j]=1;
			}
			n = n/2;
			j--;
		}

		for (ll i=0; i<cnt; i++) {
			if (a[i]==1)
				printf("%d", 6);
			else
				printf("%d", 5);
		}
		printf("\n");
	}

	return 0;
}