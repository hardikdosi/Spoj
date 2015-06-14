#include <iostream>
#include <cstdio>

#define MOD 1000000007

using namespace std;

typedef long long ll;

ll expo(ll a, ll b)
{
	ll x=1, y=a;
	while (b>0) {
		if (b%2==1)
			x=(x*y)%MOD;
		y=(y*y)%MOD;
		b = b/2;
	}
	return x%MOD;
}

int main()
{
	int t, tc=1;
	scanf("%d", &t);
	ll n;
	while (t--) {
		scanf("%lld", &n);
		if (n==1)
			printf("Case %d: %d\n", tc++, 1);
		else
			printf("Case %d: %lld\n", tc++, ((n+1)%MOD)*(expo(2, n-2))%MOD);
	}
	return 0;
}