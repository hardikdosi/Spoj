#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <utility>

#define mp(x, y) make_pair(x, y)

using namespace std;

typedef map< pair<int, pair<int, int> >, int> MPP;

int n, k;
MPP m;

int f(int pb, int i, int abc)
{
	if (i == n) {
		if (abc == k)
			return 1;
		else
			return 0;
	}

	int ans1, ans2;

	MPP::iterator it = m.find(mp(0, mp(i+1, abc)));
	if (it != m.end())
		ans1 = it->second;
	else
		ans1 = f(0, i+1, abc);

	MPP::iterator it1 = m.find(mp(1, mp(i+1, abc)));
	MPP::iterator it2 = m.find(mp(1, mp(i+1, abc+1)));

	if (pb == 0) {
		if (it1 != m.end())
			ans2 = it1->second;
		else
			ans2 = f(1, i+1, abc);
	} else {
		if (it2 != m.end())
			ans2 = it2->second;
		else
			ans2 = f(1, i+1, abc+1);
	}

	m[mp(pb, mp(i, abc))] = ans1 + ans2;
	return ans1 + ans2;
}

int main()
{
	int t, tc;
	scanf("%d", &t);

	while (t--) {
		m.clear();
		scanf("%d %d %d", &tc, &n, &k);
		printf("%d %d\n", tc, f(0, 1, 0) + f(1, 1, 0));
	}

	return 0;
}