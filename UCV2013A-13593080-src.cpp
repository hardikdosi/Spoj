#include <iostream>
#include <cstdio>

#define MOD 1000000007

using namespace std;

typedef long long ll;

ll expo(ll a, ll b)
{
	ll x=1, y=a;
	while (b>0) {
		if (b%2==1) {
			x=(x*y)%MOD;
		}
		y=(y*y)%MOD;
		b = b/2;
	}
	return x%MOD;
}

int main()
{
	ll n, l;

	while (true) {
		scanf("%lld %lld", &n, &l);

		if (n==0 && l==0)
			break;

		printf("%lld\n", ((expo(n, l+1)-1)*(expo(n-1, MOD-2)) - 1)%MOD);
	}
	return 0;
}