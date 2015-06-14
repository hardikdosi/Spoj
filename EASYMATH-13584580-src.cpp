#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;

vector<ll> s;

ll lcm(ll n, ll m)
{
	return (n*m)/__gcd(n, m);
}

void binary(vector<ll>& b, ll x)
{
	int i=0;
	while (x>0) {
		b[i] = x%2;
		x /= 2;
		i++;
	}
	reverse(b.begin(), b.end());
}

int main()
{
	int t;
	scanf("%d", &t);

	while (t--) {
		ll n, m, a, d, tmp, ans=0;
		s.clear();
		scanf("%lld %lld %lld %lld", &n, &m, &a, &d);

		s.push_back(a);
		s.push_back(a+d);
		s.push_back(a+2*d);
		s.push_back(a+3*d);
		s.push_back(a+4*d);

		for (ll i=1; i<=31; i++) {
			vector<ll> b(s.size(), 0);
			binary(b, i);

			ll cnt = count(b.begin(), b.end(), 1);

			if (cnt&1) {
				ll mul = 1;
				for (ll j=0; j<b.size(); j++) {
					if (b[j]==1) {
						mul = lcm(mul, s[j]);
					}
				}
				ans += (m/mul)-((n-1)/mul);
			} else {
				ll mul = 1;
				for (ll j=0; j<b.size(); j++) {
					if (b[j]==1) {
						mul = lcm(mul, s[j]);
					}
				}
				ans -= (m/mul)-((n-1)/mul);
			}
		}

		printf("%lld\n", (m-n+1)-ans);
	}

	return 0;
}