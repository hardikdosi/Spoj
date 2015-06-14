#include <iostream>
#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--) {
		int n;
		scanf("%d", &n);
		vector<pair<int, char> > v;
		
		int x, y;
		for (int i=0; i<n; i++) {
			scanf("%d %d", &x, &y);
			v.push_back(make_pair(x, 'l'));
			v.push_back(make_pair(y, 'r'));
		}

		sort(v.begin(), v.end());

		int cnt=0;
		int maxcount=0;
		for (int i=0; i<v.size(); i++) {
			if (v[i].second == 'l') {
				cnt++;
				maxcount = max(maxcount, cnt);
			} else if (v[i].second == 'r') {
				cnt--;
				maxcount = max(maxcount, cnt);
			}
		}
		printf("%d\n", maxcount);
	}
	return 0;
}