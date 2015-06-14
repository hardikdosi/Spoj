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
	ll n, k, tmp, ans=0;
	s.clear();
	scanf("%lld %lld", &n, &k);

	for (ll i=0; i<k; i++) {
		scanf("%lld", &tmp);
		s.push_back(tmp);
	}

	for (ll i=1; i<=pow(2, s.size())-1; i++) {
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
			ans += n/mul;
		} else {
			ll mul = 1;
			for (ll j=0; j<b.size(); j++) {
				if (b[j]==1) {
					mul = lcm(mul, s[j]);
				}
			}
			ans -= n/mul;
		}
	}
	
	printf("%lld\n", n-ans);
	
	return 0;
}