#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>

#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)

using namespace std;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);

	int t;
	scanf("%d", &t);
		
	while (t--) {
		int n;
		scanf("%d", &n);
	
		vector<ll> a(n), ans;
		vector<pair<ll, ll> > tup;

		for (int i=0; i<n; i++) {
			scanf("%lld", &a[i]);
			tup.pb(mp(a[i], i));
		}

		sort(tup.begin(), tup.end());

		for (int i=0; i<n; i++) {
			ll index = tup[i].second;
			ll front=0, back=n-1;
			while (front<index) {
				if (a[front] != -1)
					break;
				front++;
			}
			while (back>index) {
				if (a[back] != -1)
					break;
				back--;
			}
			
			ans.pb(max((index-front)*a[index], (back-index)*a[index]));
			a[index] = -1;
		}

		printf("%lld\n", *max_element(ans.begin(), ans.end()));
	}

	return 0;
}